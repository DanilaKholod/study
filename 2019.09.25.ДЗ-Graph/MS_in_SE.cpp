#include <iostream>
using namespace std;
void MS_in_SE(int** A, int** B, int N) {
		int k = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				int x = B[i][j];
				if ((i < j) && x == 1) {
					A[k][0] = i + 1;
					A[k][1] = j + 1;
					k++;
				}
			}
		}
}
int main() {
	int N, M;
	cin >> N >> M;
	int** matrix = new int*[N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new int[N];
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}
	int** spisok = new int*[M];
	for (int i = 0; i < M; i++) {
		spisok[i] = new int[2];
		for (int j = 0; j < 2; j++) {
			spisok[i][j] = 0;
		}
	}
	MS_in_SE(spisok, matrix, N);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 2; j++) {
			cout << spisok[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}