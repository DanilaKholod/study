#include <iostream>
using namespace std;
bool search(int *A, int n, int x, int q, int p = 0) {
	if (A[(q + p) / 2] == x) {
		return true;
	}
	if (q - p <= 1) {
		return false;
	}
	if (A[(p + q) / 2] > x) {
		search(A, n, x, (p + q) / 2, p);
	}
	if (A[(p + q) / 2] < x) {
		search(A, n, x, q, (p + q) / 2);
	}
}
int main()	{
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int a, b;
	cin >> a >> b;
	if (search(A, n, a, n) && search(A, n, b, n) == true)
		cout << "YES ";
	else cout << "NO";
	return 0;
}

