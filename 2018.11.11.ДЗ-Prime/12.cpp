/*Write a procedure that dynamically appends to each element.
the selected array on the right is its square. ({1,2,3,4} -> {1,1,2,4,3,9,4,16}). By
the end of the procedure, the amount of allocated memory should
to increase.*/
#include <iostream>
using namespace std;
int sqr(int x)	{	//square
	return x * x;
}
void massive(int* &a, int b)	{
	int*massive = new int[b];
	for (int i = 0; i < b; i++)
	{
		*(massive + i) = sqr(*(a + i));
	};
	int c = 2 * b;
	int* new_massive = new int[c];
	for (int i = 0; i < c; i++)
	{
		if ((i % 2) == 0)
		{
			*(new_massive +i) = *(a + (i / 2));
		}
		else
		{
			*(new_massive + i) = *(massive + ((i - 1) / 2));
		};
	};
	delete[]massive;
	a = new_massive;
}
int main()	{
	int arraySize;
	cin >> arraySize;
	int* array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> *(array + i); //input array elements
	};
	massive(array, arraySize);
	arraySize += arraySize;
	for (int i = 0; i < arraySize; i++)	{
		cout << *(array + i) << " ";
	}
	return 0;
}