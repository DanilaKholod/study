/*Write a procedure that fills a square two-dimensional array with a pyramid.*/
#include <iostream>
using namespace std;
void massiv(int **&a, int b) //a function that fills a two-dimensional array with a pyramid
{
	b--; //promotion
	int c = b, d = 0, k = 1;
	while (c >= d) {
		int x = d, y = d;
		while (x < c) { //from left to right
			a[y][x] = k;
			x++;
		}
		while (y < c) { //top down
			a[y][x] = k;
			y++;
		}
		while (x > d) { //from right to left
			a[y][x] = k;
			x--;
		}
		while (y > d) { //down up
			a[y][x] = k;
			y--;
		}
		d++;
		c--;
		k++;
	}
	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = ((b / 2) + 1);
	}
}
int main()	{
	int arraySize;
	cin >> arraySize;
	int **array = new int *[arraySize];
	for (int array1 = 0; array1 < arraySize; array1++)
	{
		*(array + array1) = new int[arraySize];
	}
	massiv(array, arraySize);
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			cout << array[i][j] << " ";
		};
		cout << "\n";
	}
	return 0;
}