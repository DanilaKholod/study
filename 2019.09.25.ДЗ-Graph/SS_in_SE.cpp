#include <iostream>
#include <vector>
using namespace std;
void SS_in_SE(vector<vector<int>> &A, vector<vector<int>> B, int N) {
	int k = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < B[i].size(); j++) {
				int x = B[i][j];
				if ((x < i + 1)) {
					A[k][0] = x;
					A[k][1] = i + 1;
					k++;
				}
			}
		}
}
int main() {
	int N;
	int M;
	int V;
	int X;
	cin >> N >> M;
	vector<vector<int>> spisok1(N);
	for (int i = 0; i < N; i++) {
		cin >> V;
		for (int j = 0; j < V; j++) {
			cin >> X;
			spisok1[i].push_back(X);
		}
	}
	vector<vector<int>> spisok2(M, vector<int> (2));
	SS_in_SE(spisok2, spisok1, N);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 2; j++) {
			cout << spisok2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}