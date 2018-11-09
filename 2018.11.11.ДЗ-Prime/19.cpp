/*Write a Boolean function to check if a single line is
an anagram of another line (i.e. can be obtained by rearranging letters). Can
assume that the string consists only of Latin letters.*/
#include <iostream>
using namespace std;
int length(char* a) //lenght 
{
	int b = 0;
	while (*a++)
	{
		b++;
	};
	return b;
}
bool massiv(char* a, int b, char* c, int d)	{
	if (b != d) //if the size is different, then it is not exactly an anagram
	{
		return 0; //so finish the function
	}
	else //go ahead
	{
		for (int i = 0; i < b; i++) //put a pointer to the first character of the first word
		{
			int u = 0;
			for (int j = 0; j < d; j++)  //put a pointer to the first character of the second word of the word
			{
				if (*(a + i) == *(c + j)) //if there is a match, then delete this symbol so as not to take it several times.
				{
					int k = j, h = 0;
					char* massiv = new char[d - 1];
					while (h < (d - 1))
					{
						for (j = 0; j < d; j++)
						{
							if (j != k)
							{
								*(massiv + h) = *(c + j);
								h++;
							}
						}
					}
					c = massiv;
					u++; //go through the whole first word
				}
			}
			if (u == 0)
			{
				return 0;
				break;
			}
		}
		return 1;
	}
}
int main()
{
	int n, m;
	char* array = new char[256];
	cin.getline(array, 256, '\n');
	n = length(array);

	char* array1 = new char[256];
	cin.getline(array1, 256, '\n');
	m = length(array1);
	cout << '\n';
	if (massiv(array, n, array1, m) == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}