/*Write two functions that find the approximate square value and
cubic root. The program should not be used math
libraries.*/
#include <iostream>
using namespace std;
double sqrt(double a) //square root
{
	double k;
	double c = 0.000001;
	for (double i = 0; true; i += c) //square selection
	{
		if (((i * i) <= a) && (((i + c) * (i + c)) >= a))
		{
			k = i;
			break;
		};
	};
	k *= (1 / c); //rounding
	long long s = (long long)k + 1;
	int e = (s % 10);
	if (e >= 5)
	{
		s -= e;
		s += 10;
	}
	else
	{
		s -= e;
	};
	k = (s / 10);
	k *= (c * 10);
	return k;
}
double cbt(double a) //third root
{
	double k;
	double c = 0.000001;
	for (double i = 0; true; i += c)
	{
		if ((i * i * i <= a) && ((i + c) * (i + c) * (i + c) >= a)) //cube selection
		{
			k = i;
			break;
		};
	};
	k *= (1 / c); //rounding
	long long s = (long long)k + 1;
	int e = (s % 10);
	if (e >= 5)
	{
		s -= e;
		s += 10;
	}
	else
	{
		s -= e;
	};
	k = (s / 10);
	k *= (c * 10);
	return k;
}
int main()
{
	long long n;
	cin >> n;
	cout << sqrt(n) << '\n';
	cout << cbt(n) << '\n';
	return 0;
}
