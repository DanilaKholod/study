#include <iostream>
#include <vector>
using namespace std;
void SE_in_SS(vector<vector<int>> &A, vector<vector<int>> B, int N, int M) {
	for (int i = 0; i < M; i++) {
			int k = 0;
			int a = B[i][k];
			int b = B[i][k + 1];
			A[a - 1].push_back(b);
			A[b - 1].push_back(a);
		}
}
int main() {
	int N;
	int M;
	cin >> N >> M;
	vector<vector<int>> spisok1(M, vector<int>(2));
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> spisok1[i][j];
			}
	}
	vector<vector<int>> spisok2(N);
	SE_in_SS(spisok2, spisok1, N, M);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < spisok2[i].size(); j++) {
			cout << spisok2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}