/*Write a program that finds all Sophie Germain prime numbers not exceeding n. The program should work no more than O (n * log log n) steps.*/
#include <iostream>
using namespace std;
int main()	{
    int n;
    cin >> n;
    bool *used = new bool[n + 1];
    used[0] = used[1] = 0;
	for (int i = 2; i <= 2*n + 1; i++) {
		used[i] = 1;
	}
	for (int i = 2; i <= 2*n + 1; i++) {
		if (used[i]) {
			for (int j = i + i; j <= 2*n + 1; j += i) {
				used[j] = 0;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (used[i] && used[2 * i + 1]) {
			cout << i << " ";
		}
	}
    return 0;
}
