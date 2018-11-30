/*Write a relocation program program that calculates the value of the Euler function for the number n. 
The program should work no more than O (n * log n) steps.*/
#include <iostream>
using namespace std;
int gcd(int a, int b)	{
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()	{
	int n, e = 1;
	cin >> n;
	for (int i = 2; i < n; i++) {
		if (gcd(n, i) == 1) {
			e++;
		}
	}
	cout << e;
	return 0;
}