#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 1; i < n; i++) {
		array[i] = -1;
	}
	for (int i = 1; i < n; i++) {
		if (i * i > n)
			break;
		array[i] = i * i;
	}
	int t = 0, q = 0;
	for (int i = n - 1; i > 0; i--) {
		if (array[i] != -1) {
			if (q + array[i] <= n) {
				while (t + q <= n) {
					t += array[i];
				}
				t -= array[i];
				q += t;
				cout << t << " ";
			}
		}
		t = 0;
	}
	return 0;
}

