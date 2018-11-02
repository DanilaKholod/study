/*Write a program that replaces compound numbers with their largest
simple dividers.*/
#include <iostream>
using namespace std;
bool prime(int a) {
	if (a == 1)
	{
		return 0;
	}
	for (int i = 2; i < a; i++) {
		if ((a % i) == 0) {
			return 0;
		}
	}
		return 1;
}
int main()
{
	int n;
	cin >> n;
	if ((prime(n) == prime(2)) || (n == 1))
	{
		cout << "Error! Number is not composite";
	}
	else
	{
		for (int i = n; i >= 2; i--)
		{
			if (((n % i) == 0) && (prime(i) == prime(2)))
			{
				n = i;
				break;
			};
		};
		cout << n;
	};
	return 0;
}