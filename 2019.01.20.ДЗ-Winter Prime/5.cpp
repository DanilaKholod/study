#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
int min4(int a, int b, int c, int d) {
	if (a <= b && a <= c && a <= d) {
		return a;
	}
	else if (b <= a && b <= c && b <= d) {
		return b;
	}
	else if (c <= a && c <= b && c <= d) {
		return c;
	}
	else {
		return d;
	}
}
int min3(int a, int b, int c) {
	if (a <= b && a <= c) {
		return a;
	}
	else if (b <= c) {
		return b;
	}
	return c;
}
int min2(int a, int b) {
	if (a <= b) {
		return a;
	}
	return b;
}
int reans(int *d, int *steps, int q, int i) {
	if (d[q - 1] + 1 == d[q]) {
		steps[i] = 1;
		return q - 1;
	}
	else if (d[q - 4] + 1 == d[q]) {
		steps[i] = 2;
		return q - 4;
	}
	else if (d[q - 5] + 1 == d[q]) {
		steps[i] = 3;
		return q - 5;
	}
	else if (d[q / 2] + 1 == d[q]) {
		steps[i] = 4;
		return q / 2;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int X, Y;
	cin >> X >> Y;
	int *d = new int[Y + 1];
	for (long long i = 0; i <= Y; i++) {
		if (i == X) {
			d[i] = 1;
		}
		else if (i < X) {
			d[i] = INT_MAX;
		}
		else if ((i % 2 == 0) && (i >= 5)) {
			d[i] = min4(d[i - 1], d[i - 4], d[i - 5], d[i / 2]) + 1;
		}
		else if ((i % 2 == 0) && (i < 5) && (i >= 4)) {
			d[i] = min3(d[i - 1], d[i - 4], d[i / 2]) + 1;
		}
		else if ((i % 2 == 0) && (i < 4) && (i >= 1)) {
			d[i] = min2(d[i - 1], d[i / 2]) + 1;
		}
		else if ((i % 2 != 0) && (i >= 5)) {
			d[i] = min3(d[i - 1], d[i - 4], d[i - 5]) + 1;
		}
		else if ((i % 2 != 0) && (i < 5) && (i >= 4)) {
			d[i] = min2(d[i - 1], d[i - 4]) + 1;
		}
		else if ((i % 2 != 0) && (i < 4) && (i >= 1)) {
			d[i] = d[i - 1] + 1;
		}
	}
	int size = d[Y];
	int *steps = new int[size];
	int q = Y;
	for (long long i = size - 1; i >= 0; i--) {
		q = reans(d, steps, q, i);
	}
	for (long long i = 0; i <= size; i++) {
		if (steps[i] == 1) {
			cout << "Прибавить 1" << "\n";
		}
		else if (steps[i] == 2) {
			cout << "Прибавить 4" << "\n";
		}
		else if (steps[i] == 3) {
			cout << "Прибавить 5" << "\n";
		}
		else if (steps[i] == 4) {
			cout << "Умножить на 2" << "\n";
		}
	}
	return 0;
}