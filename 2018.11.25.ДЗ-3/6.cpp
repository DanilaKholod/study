/*Write a program that finds all Chen prime numbers not exceeding n. The program should work 
no more than O (n * log log n) steps.*/
#include <iostream>
using namespace std;
int main()  {
	int n;
	cin >> n;
	bool *used = new bool[n + 3];
	int *array = new int[n + 3];
	for (int i = 2; i <= n+2; i++)  {
        used[i] = 1;
        array[i] = 0;
    }
	for (int i = 2; i <= n + 2; i++)    {
		if (used[i])    {
			for (int j = i + i; j <= (n + 2); j += i)   {
			used[j] = 0;
			int x = j;
			while ((x % i) == 0)	{
                    		array[j]++;
                    		x /= i;
                    		if (array[j] > 2) break;
               		 }
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if ((used[i]) && ((used[i + 2]) || (array[i + 2] == 2)))    {
			cout << i << " ";
		}
	}
	return 0;
}
