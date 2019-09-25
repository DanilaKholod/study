#include <iostream>
using namespace std;
void SE_in_MS(int** A, int** B, int N, int M) {
	for (int i = 0; i < M; i++) {
		int j = 0;
			int a, b;
			a = B[i][j];
			b = B[i][j + 1];
			A[a-1][b-1] = A[b-1][a-1] = 1;
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	int** spisok = new int*[M];
	for (int i = 0; i < M; i++) {
		spisok[i] = new int[2];
			for (int j = 0; j < 2; j++) {
				cin >> spisok[i][j];
		}
	}
	int** matrix = new int*[N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
		for (int j = 0; j < N; j++) {
			matrix[i][j] = 0;
		}
	}
	SE_in_MS(matrix, spisok, N, M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";

		}
		cout << endl;
	}
	return 0;
}