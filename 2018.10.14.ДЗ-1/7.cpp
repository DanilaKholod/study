/*
Write a program input minimum amount of a pair of array elements
separated from each other by at least 4 elements (the first and fifth elements
may be appropriate, but the first and third are not). Efficiency in this program
not priority.
*/
#include <iostream>

using namespace std;

int min(int a, int b)
{
	if (a < b) {
		return a;
	}
	return b;
}

int minSum(int *array,int arraySize) {

	int result = 2147483647;
	for (int i = 0; i < arraySize - 4; i++) {

		for (int j = i + 4; j < arraySize; j++) {

			result = min(result, *(array+i) + *(array+j));

			}
		}
	return result;
}


int main() {
	int arraySize;
	cin >> arraySize;
	int *array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> *(array + i);
	};
	cout << minSum(array, arraySize);
	return 0;
}