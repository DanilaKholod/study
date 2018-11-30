/*Write a program that finds the first n composite numbers.
The program should work no more than O (n * log log n) steps.*/
#include <iostream>
using namespace std;
int main() {
	int n, count;
	cin >> n;
	count = n;
	if (n <= 5) {
		n += n + n + 1;
	}
	n += n;
	bool *used = new bool[n + 1];
	used[0] = used[1] = 0;
	for (int i = 2; i <= n; i++) {
		used[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		if (used[i] && i) {
			for (int j = i + i; j <= n; j += i) {
				used[j] = 0;
			}
		}
		if (!used[i]) {
			cout << i << " ";
			--count;
		}
		if (count == 0) {
			break;
		}
	}
	return 0;
}
