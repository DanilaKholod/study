#include <iostream>
#include <vector>
using namespace std;
void SS_in_MS(vector<vector<int>> &A, vector<vector<int>> B, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < B[i].size(); j++) {
			int x = B[i][j];
			A[i][x - 1] = 1;
		}
	}
}
int main() {
	int X;
	int N;
	int V;
	cin >> N;
	vector<vector<int>> spisok(N);
	for (int i = 0; i < N; i++) {
		cin >> V;
		for (int j = 0; j < V; j++) {
			cin >> X;
			spisok[i].push_back(X);
		}
	}
	vector<vector<int>> matrix(N, vector<int>(N));
	SS_in_MS(matrix, spisok, N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}