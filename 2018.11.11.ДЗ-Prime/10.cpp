/*Write a procedure that removes everything from a dynamically allocated array.
even values ​​(the function takes as arguments - a pointer to
array and its size). At the end of the procedure, the amount allocated
memory should decrease.*/
#include <iostream>
using namespace std;
int variable(int* a, int b)	{ //parity check
	int m = 0;
	for (int i = 0; i < b; i++)
	{
		if (((*(a + i)) % 2) == 0)
		{
			m += 1;
		}
	}
	return m;
}
void massiv(int* &c, int d)	{ //new array output function without parity
	int r = variable(c, d);
	int * massiv = new int[d - r];
	int k = 0;
	for (int i = 0; i < d; i++)
	{
		if (((*(c + i)) % 2) != 0)
		{
			*(massiv + k) = *(c + i);
			k += 1;
		}
	}

	c = massiv;
}
int main()	{
	int arraySize;
	cin >> arraySize;
	int*array = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cin >> *(array + i); //input array elements
	}
	int f = variable(array, arraySize); //check how many even
	massiv(array, arraySize); //generate a new array without even
	cout << '\n';
	for (int i = 0; i < (arraySize - f); i++)
	{
		cout << *(array + i) << " "; //output of new array elements(no pairity)
	}
	delete[] array; //delete memory
	return 0;
}