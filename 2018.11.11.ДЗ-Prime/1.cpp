/*Write a program that calculates the sum of odd digits of an integer.*/
#include <iostream>
using namespace std;
int main() {
	long long int n;
	cin >> n;
	int sum = 0;
	while (n != 0) {
		if ((n % 10) % 2 == 1) {
			sum += (n % 10);
		}
		n /= 10;
	}
	cout << sum;
	return 0;
}