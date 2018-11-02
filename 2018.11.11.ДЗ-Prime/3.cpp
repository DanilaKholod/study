/*Write a program that calculates the binomial coefficient of n by k.
the program can not use numbers that exceed the total value.*/
#include <iostream>
using namespace std;
long long C(int a, int b) {
	if ((b == 0) || (a == b)) {
		return 1;
	}
	else {
		return (C(a - 1, b) + C(a - 1, b - 1));
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	if (k > n)
	{
		cout << "Error";
	}
	else
	{
		cout << C(n, k);
	};
	return 0;
}