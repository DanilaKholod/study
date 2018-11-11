/*Write a procedure that removes unnecessary ones from a dynamically allocated string.
spaces Not superfluous are single spaces that separate a couple of words. By
shutdown
to increase.*/
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int check(char* a, int b)
{
	int k = 0;
	for (int i = 0; i < b; i++)
	{
		if (*(a + i) == ' ')
		{
			if (i == 0)
			{
				k++;
			}
			else
			{
				if (i == (b - 1))
				{
					k++;
				}
				else
				{
					if (*(a + i + 1) == ' ')
					{
						k++;
					}
				}
			}
		}
	}
	return k;
}

int length(char* a)
{
	int b = 0;
	while (*a++)
	{
		b++;
	};
	return b;
}
void massiv(char* &a, int b)
{
	int t = check(a, b);
	int k = (b - t);
	char* massiv = new char[k];

	int i = 0, j = 0;;
	while (j < b)
	{
		if (i == k) break;
		if ((*(a + j)) != ' ')
		{
			*(massiv + i) = *(a + j);
			i++;
		}
		else
		{
			if (j != 0)
			{
				if (*(a + j - 1) != ' ')
				{
					*(massiv + i) = *(a + j);
					i++;
				}
			}
		}
		j++;
	}
	a = massiv;
}
int main()
{
	int arraySize;
	char*space = new char[256];
	gets(space);
	arraySize = length(space);
	int x = check(space, arraySize);
	massiv(space, arraySize);
	int i = 0;
	while (i < (arraySize - x))
	{
		if (*(space + i) != ' ') { cout << *(space + i); };
		if (*(space + i) == ' ') { cout << " "; };
		i++;
	}
}