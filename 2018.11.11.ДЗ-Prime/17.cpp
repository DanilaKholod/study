/*Write a procedure that fills a square two-dimensional array
consecutive numbers of the snake counterclockwise, starting from the top
right corner.*/
#include <stdio.h>
using namespace std;
void  massiv(int** &a, int b)	{
	b--;
	int c = b, d = 0, k = 1;
	while (c >= d)
	{
		int x = c, y = d;
		while (x > d)
		{
			a[y][x] = k;
			k++;
			x--;
		}
		while (y < c)
		{
			a[y][x] = k;
			k++;
			y++;
		}
		while (x < c)
		{
			a[y][x] = k;
			k++;
			x++;
		}
		while (y > d)
		{
			a[y][x] = k;
			k++;
			y--;
		}
		d++;
		c--;
	}
	if ((b % 2) == 0)
	{
		a[(b / 2)][(b / 2)] = ((b + 1)*(b + 1));
	}
}

int main() {
	int arraySize;
	scanf("%d", &arraySize);
	int** array = new int*[arraySize];
	for (int array1 = 0; array1 < arraySize; array1++)
	{
		*(array + array1) = new int[arraySize];
	}
	int l = 3;
	if ((arraySize*arraySize) >= 10)
	{
		l += 2;
	}
	massiv(array, arraySize);
	for (int i = 0; i < arraySize; i++)	{
		for (int j = 0; j < arraySize; j++)	{
			printf("%*d", l, array[i][j]);
		}
		printf("\n");
	}
}