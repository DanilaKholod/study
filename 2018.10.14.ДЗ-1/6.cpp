/*Write the sort function an ordering array of integers and a program with
an example of its use. In the code it is forbidden to use calls to
array by index (Arr [i]), i.e. Need to use pointing arithmetic.
Efficiency in this program is not a priority. Number of arguments
functions should not exceed 2.*/
#include <iostream> 

using namespace std;
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void sort(int *array, int arraySize) {
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = i + 1; j < arraySize; j++)
		{
			if (*(array + i) > *(array + j))
			{
				swap(*(array + i), *(array + j));
			}
		}
	}
}

int main() {
	int arraySize;
	cin >> arraySize;
	int *array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> *(array + i);
	};
	sort(array, arraySize);
	for (int i = 0; i < arraySize; i++)
	{
		cout << *(array + i) << " ";
	};
	return 0;
}