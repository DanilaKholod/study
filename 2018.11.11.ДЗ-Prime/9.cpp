/*Write a program that finds the root of the function f, if it is known that f -
monotone. We assume that the function f is not known (i.e. it simply returns the value
by argument). It is reasonable to use a cubic function for debugging.*/
#include <iostream>
using namespace std;
bool sign(double a) {	//sign 
	return (a >= 0);
}

double f(double a) {	//cubic function
	return (a * a * a - 1);
}
int main() {
	double n, x = 0, c = 100, i = (x - c), j = (x + c);
	cin >> n; //accuracy
	while (sign(f(i)) == sign(f(j))) 
	{
		i -= c;
		j += c;
	}
	double d = (j - i);
	while ((f(x) != 0) && (sign(f(x - n)) == sign(f(x + n))))
	{
		d /= 2;
		if (sign(f(i)) != sign(f(x)))
		{
			j -= d;
			x -= (d / 2);
		}
		else
		{
			i += d;
			x += (d / 2);
		}
	}

	cout << x;
	return 0;
}