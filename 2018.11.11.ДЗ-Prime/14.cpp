/*Write a procedure that performs a “decompression” of a character dynamically.
selected array, made in the previous task. For example the string “3a1b5c2d“
should go to “aaabcccccdd”. We can assume that there are no more than nine
the same letters coming in a row.*/
#include <iostream>
using namespace std;
int memory(char* a, int b)	{
	int p = 0, k;
	for (int i = 0; i < b; i++)
	{
		if ((i % 2) == 0)
		{
			k = (*(a + i) - '0');
			p += k;
		}
	}
	return p;
}
int length(char* a) //array length
{
	int b = 0;
	while (*a++)
	{
		b++;
	};
	return b;
}
void decompression(char* &a, int b)
{
	int r = memory(a, b);
	char* massiv = new char[r];
	int q, z = 0;;
	for (int i = 0; i < b; i += 2)
	{
		q = (*(a + i) - '0');
		while (q != 0)
		{
			*(massiv + z) = *(a + i + 1);
			q -= 1;
			z += 1;
		}
	}
	a = massiv;
}
int main()	 {
	int n;
	char* array = new char[256];
	cin.getline(array, 256, '\n');
	n = length(array);
	int X = memory(array, n);
	decompression(array, n);
	for (int i = 0; i < X; i++)
	{
		cout << *(array + i);
	}
	return 0;
}