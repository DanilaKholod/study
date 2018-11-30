/*Write an effective function that writes out from the array of length n all elements whose number of 
twos in the ternary is less than k. The function should return the total number of twos in the ternary 
record of all numbers in the array. Write in the comments why brute force is effective.*/
#include <iostream>
using namespace std;
int output(int* a, int b, int c)	{
	int count = 0;
	for (int i = 0; i < b; i++)
	{
		int two = 0, x = a[i];
		while (x > 1)
		{
			if ((x % 3) == 2) { 
				count++; 
				two++; 
			}
			x /= 3;
		}
		if (two < c) { cout << a[i] << " "; };
	}
	cout << '\n';
	return count;
}
int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	int *array = new int[n];
	for (int i = 0; i < n; i++)	{
		cin >> array[i];
	}

	cout << output(array, n, k);
	return 0;
}