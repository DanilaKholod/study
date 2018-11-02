/*Write a program that calculates the product of digits of an integer, parity
which coincides with the parity of the last digit.*/
#include <iostream>
using namespace std;
bool ch(int a)
{
	return ((a % 2) == 0);
}
int main() {
	long long n, k, last, mult = 1;
	cin >> n;
	k = (n % 10);
	last = k;
	while (n >= 1)
	{
		if (ch(last) == ch(k))
		{
			mult *= last;
		};
		n /= 10;
		last = (n % 10);
	};
	cout << mult;
	return 0;
}