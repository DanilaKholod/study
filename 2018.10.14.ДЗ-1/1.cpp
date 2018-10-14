/*Write a program to check if the number is composite. AT
the program is guaranteed that the number is natural.*/
#include <iostream>
using namespace std;
int main() {
	unsigned int N;
	cin >> N;
	/*Check that if the number is 1, then the program ends and displays "Unit"*/
	if (N == 1) {
		cout << N << ": Unit";
		return 0;
	};
	/*Checks that if there is a number by which N is divided, then it is composite*/
	for (unsigned int i = 2; i < N; i++) {
		if (N % i == 0) {
			cout << N << ": Composite";
			return 0;
		}
	}
	/*If not*/
	cout << N << ": Prime";
	return 0;
}