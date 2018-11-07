/*Write a procedure to remove from a dynamically allocated array.
maximum and minimum elements (if there are several, delete
need all). At the end of the procedure, the amount of allocated memory.
should decrease.*/
#include <iostream>
using namespace std;
int max(int* a, int b) //max function
{
	int k = *a;
	for (int i = 0; i < b; i++)
	{
		if ((*(a + i)) > k)
		{
			k = *(a + i);
		}
	}
	return k;
}

int min(int* a, int b) //min funcion
{
	int k = *a;
	for (int i = 0; i < b; i++)
	{
		if ((*(a + i)) < k)
		{
			k = *(a + i);
		}
	}
	return k;
}

int variable(int* a, int b) //search min and max
{
	int m = 0;
	for (int i = 0; i < b; i++)
	{
		if (((*(a + i)) == (max(a, b))) || ((*(a + i)) == (min(a, b))))
		{
			m += 1;
		}
	}
	return m;
}
void massiv(int* &a, int b)	{ //new array without min and max
	int r = variable(a, b);
	int* massiv = new int[b - r];
	int k = 0;
	for (int i = 0; i < b; i++)
	{
		if (((*(a + i)) != max(a, b)) && ((*(a + i)) != min(a, b)))
		{
			*(massiv + k) = *(a + i);
			k += 1;
		}
	}

	a = massiv;
}
int main()	{
	int arraySize;
	cin >> arraySize;
	int* array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> *(array + i); //input array elements
	}
	int f = variable(array, arraySize); //search min and max
	massiv(array, arraySize); //generating a new array(without min and max)
	cout << '\n';

	for (int i = 0; i < (arraySize - f); i++)
	{
		cout << *(array + i) << " ";
	}

	delete[]array;
	return 0;
}