/*Write a program that finds the sum of the simple elements of the array*/
#include <iostream>
using namespace std;

bool prime(int a)
{
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
int main() {
	int arraySize, sum = 0;
	cin >> arraySize;
	int *array = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		cin >> *(array + i);
		if (prime(*(array + i)) == prime(3))
		{
			sum += *(array + i);
		};
	};
	cout << sum;
	return 0;
}