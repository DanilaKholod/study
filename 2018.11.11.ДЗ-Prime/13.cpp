/*Write a procedure for compressing a character dynamically allocated
array. Several consecutive identical letters must be replaced by their
the number and the letter itself. For example, the string “aaabcccccdd” should go to
“3a1b5c2d”. We can assume that there are no more than nine identical letters going
contract.*/
#include <iostream>
using namespace std;
int variable(char* a, int b)	{
	int k = 1;
	for (int i = 0; i < (b - 1); i++)	{
		if ((*(a + i)) != (*(a + i + 1)))	{
			k += 1;
		}
	}
	return k;
}
int length(char* a)	{ //array length
	int b = 0;
	while (*a++)	{
		b++;
	}
	return b;
}
void compression(char* &a, int b)	{ 
	int n = variable(a, b);
	n += n;
	int z = 0;
	char* massive = new char[n];
	int i = 0;
	while (i < b)
	{
		int y = 0;
		int j = i;
		while ((*(a + i)) == (*(a + j)))
		{
			y += 1;
			j += 1;
		};
		*(massive + z + 1) = *(a + i); 
		*(massive + z) = y + '0'; //transfer to int
		i = j;
		z += 2;
	}
	a = massive;
}
int main()	{
	int n;
	char* array = new char[256];
	cin.getline(array, 256, '\n');
	n = length(array);
	int X = variable(array, n);
	X += X;
	compression(array, n);
	for (int i = 0; i < X; i++)	{
		cout << *(array + i);
	}
	return 0;
}