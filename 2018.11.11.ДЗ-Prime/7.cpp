/*Write a program that writes all the elements of a sequence
having exactly seven dividers*/
#include <iostream>
using namespace std;
int main() {
	int arraySize;
	cin >> arraySize;
	int *array = new int[arraySize];
	for (int i = 0; i < arraySize; i++) {
		cin >> *(array + i); //input array elements
	}
	cout << '\n';
	for (int i = 0; i < arraySize; i++) {
		int k = 0;
		int q = *(array + i);
		for (int j = 1; j <= q; j++) {
			if ((q % j) == 0) //divisor count of each element of the array
			{
				k += 1;
			}
		}
		if (k == 7) { //if there are 7, then output this element
			cout << q << " ";
		}
	}
	return 0;
}