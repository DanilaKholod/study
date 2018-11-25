/*Write an effective procedure that writes out from an array of length n all elements whose product of 
nonzero digits is greater than k. Write in the comments why brute force is effective.*/
#include <iostream>
using namespace std;
void output(int *a, int b, int c) {
	for (int i = 0; i < b; i++) {
		int mult = 1;
		int q = a[i];
		while (a[i] >= 1) {
			if ((a[i] % 10) != 0) {
				mult *= (a[i] % 10);
			}
			if (mult > c) {
				cout << q << " ";
				break;

			}
			a[i] /= 10;
		}
	}
}
int main() {
	int N, k;
	cin >> N;
	cin >> k;
	int *array = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	output(array, N, k);
	return 0;
}