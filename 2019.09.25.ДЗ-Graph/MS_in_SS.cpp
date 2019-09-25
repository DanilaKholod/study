#include <iostream>
#include <vector>
using namespace std;
void MS_in_SS(vector<vector<int>> &A, vector<vector<int>> B, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int x = B[i][j];
			if (x == 1) {
				A[i].push_back(j + 1);
			}
		}
	}
}
int main() {
	int N;
	cin >> N;
	vector<vector<int>> matrix(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}
	vector<vector<int>> spisok(N);
	MS_in_SS(spisok, matrix, N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < spisok[i].size(); j++) {
			cout << spisok[i][j];
		}
		cout << endl;
	}
	return 0;
}