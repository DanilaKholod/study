/*Write an effective procedure that writes out from an array of length n all elements whose product of 
nonzero digits is greater than k. Write in the comments why brute force is effective.*/
#include <iostream>
using namespace std;
int main() {
	int N, k;
	cin >> N;
	cin >> k;
	int *array = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < N; i++) {
		int mult = 1;
		int q = array[i];
		while (array[i] >= 1) {
			if ((array[i] % 10) != 0) {
				mult *= (array[i] % 10);
			}
			if (mult > k) {
				cout << q << " ";
				break;
				
			}
			array[i] /= 10;
		}
	}
	return 0;
}