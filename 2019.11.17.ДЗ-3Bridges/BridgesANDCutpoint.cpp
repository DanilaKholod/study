#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <vector>
using namespace std;
void dfs (int v, int p , vector<vector<int> > g, int N, bool* used,int*  tin,int* fup, int timer, bool* A) {
	used[v] = true;
	tin[v] = fup[v] = timer++;
	int children = 0;
	for (size_t i=0 ; i < g[v].size(); ++i) {
		int to = g[v][i];
		if (to == p)  continue;
		if (used[to])
			fup[v] = min (fup[v], tin[to]);
		else {
			dfs (to, v, g, N, used, tin, fup, timer, A);
			fup[v] = min (fup[v], fup[to]);
			if ((fup[to] >= tin[v]) && p != -1)
                A[v] = true;
			++children;
		}
	}
	if (p == -1 && children > 1)
        A[v] = true;
}
int main()
{
    int X;
	int N;
	int V;
	cin >> N;
	bool* B = new bool[N];
	vector<vector<int> > spisok(N);
	for (int i = 0; i < N; i++) {
		cin >> V;
		if (V == 1)
			B[i] = true;
		else
			B[i] = false;
		for (int j = 0; j < V; j++) {
			cin >> X;
			spisok[i].push_back(X);
		}
	}
	int timer = 0;
    bool* used = new bool[N];
    for (int i=0; i< N; ++i) {
		used[i] = false;
    }
    int* tin = new int[N];
    int* fup = new int[N];
    bool* A = new bool[N];
    for (int i=0; i< N; i++) {
		A[i] = false;
    }
	dfs(0, -1, spisok, N, used, tin, fup, timer, A);
	for (int i = 0; i< N; i++) {
		if (A[i] == true) {
            cout << i << " is CUTPOINT" << endl;
		}
    }
    int k = 0;
	for (int i = 0; i < N; i++) {
		k = 0;
		if (A[i] == true || B[i] == true)
			for (int j = 0; j < spisok[i].size(); j++) {
				if (A[spisok[i][j]] == true || B[spisok[i][j]] == true)
                k++;
				if (k >= 3)
					cout << i << " - CUTPOINT with 3 bridges " << endl;
			}
	}
    return 0;
}
