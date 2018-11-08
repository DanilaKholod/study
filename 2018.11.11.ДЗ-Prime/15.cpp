/*Write a procedure that fills a square two-dimensional array of
diagonal On the side diagonal should be the largest values, on
neighboring with it - on the unit of smaller ones, and so on - up to the angle in which
stand units.*/
#include <iostream>
using namespace std;
void massiv(int** &a, int b)	{ //function that fills a two-dimensional array
	b --; //recess
	int c = b, d = 0, k = 1;
	while (c >= d) 
	{
		int x = d, y = d;
		while (x < c) //left to right
		{
			a[y][x] = k;
			k ++;
			x ++;
		}
		while (y < c) //down up
		{
			a[y][x] = k;
			k --;
			y ++;
		}
		while (x > d) //from left to right
		{
			a[y][x] = k;
			k ++;
			x --;
		}
		while (y > d) //down up
		{
			a[y][x] = k;
			k --;
			y --;
		}
		d ++; //inward movement
		c --; //inward movement
		k += 2; //new k
	}
	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = (b + 1);
	}
}

int main()	{
	int arraySize;
	cin >> arraySize; //input array size
	int** array = new int*[arraySize]; //creating a two-dimensional dynamic array
	for (int array1 = 0; array1 < arraySize; array1++)
	{
		*(array + array1) = new int[arraySize];
	}
	massiv(array, arraySize); //array fill
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			cout << array[i][j] << " "; //output of two-dimensional array elements
		}
		cout << "\n";
	}
	return 0; //end 
}