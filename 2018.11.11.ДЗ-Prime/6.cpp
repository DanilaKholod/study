/*Write a program that writes all the elements of the sequence,
having at least five dividers*/
#include <iostream>
using namespace std;
int main() {
	int arraySize;
	cin >> arraySize;
	int *array = new int[arraySize];
	for (int i = 0; i < arraySize; i++) {
		cin >> *(array + i);
	}
	cout << '\n';
	for (int i = 0; i < arraySize; i++) {
		int k = 0;
		int q = *(array + i);
		for (int j = 1; j <= q; j++) {
			if ((q % j) == 0)
			{
				k += 1;
			}
		}
		if (k >= 5)	{
			cout << q << " ";
		}
	}
	return 0;
}