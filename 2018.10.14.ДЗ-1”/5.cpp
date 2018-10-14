/*Write the functions min, max, avg, med, swap procedure
three real arguments and a program with an example of use. min -
finds the minimum of three values, max - maximum, avg - average
arithmetic, med - median (google what it is). swap - swaps
values in a circle (first to second, second to third, third to first)*/
#include <iostream>
using namespace std;
/*swap function*/
void swap(float &a, float &b, float &c) {
	float   t = a;
	a = c;
	c = b;
	b = t;
}
/*min function*/
float min(float a, float b, float c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b < c) {
		return b;
	}
	return c;
}
/*max function*/
float max(float a, float b, float c) {
	if (a > b && a > c) {
		return a;
	}
	else if (b > c) {
		return b;
	}
	return c;
}
/*avg function*/
float avg(float a, float b, float c) {
	return (a + b + c) / 3;
}
/*med function*/
float med(float a, float b, float c) {
	if (a > b && a < c) {
		return a;
	}
	else if (b > a && b < c) {
		return b;
	}
	return c;
}
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	cout << "min:" << min(a, b, c) << "\n";
	cout << "max:" << max(a, b, c) << "\n";
	cout << "avg:" << avg(a, b, c) << "\n";
	cout << "med:" << med(a, b, c) << "\n";
	cout << "before swap:" << a << " " << b << " " << c << "\n";
	swap(a, b, c);
	cout << "after swap:" << a << " " << b << " " << c << "\n";
	return 0;
}