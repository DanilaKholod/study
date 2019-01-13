#include <iostream>
using namespace std;
int min(int a, int b)
{
	if (a < b) {
		return a;
	}
	return b;
}
int minSum(int *array, int arraySize) {
	int result = 2147483647;
	for (int i = 0; i < arraySize - 5; i++) {
		for (int j = i + 5; j < arraySize; j++) {
			result = min(result, array[i] + array[j]);
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
		cin >> array[i];
	};
	cout << minSum(array, arraySize);
	return 0;
}