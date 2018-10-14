/*Write a program that finds in the array the sum of the elements of fissile or
by 72 or 27 (not together).*/
#include <iostream>
using namespace std;
int main() {
	int arraySize;
	/*Entering an array dimension*/
	cin >> arraySize;
	int sum = 0;
	int *array = new int[arraySize];
	for (unsigned int i = 0; i < arraySize; i++) {
		/*Input array elements until the number of elements is equal to its dimension*/
		cin >> array[i];
		if ((abs(array[i]) % 27 == 0) && (abs(array[i]) % 72 != 0)) {
			sum += array[i];
		}
		else if ((abs(array[i]) % 27 != 0) && (abs(array[i]) % 72 == 0)) {
			sum += array[i];
		}
	}
	cout << sum;
	return 0;
}