#include <iostream>
#include <deque>
using namespace std;
deque<int> neighbors = { 0 };
void painting(bool** matrix, int *paint, int n) {
	int min = 1;
	int time = 0;
	for (int i = 0; i < n; i++) {
		min = 1;
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 1 && paint[j] > min)
				neighbors.push_back(paint[j]);
			if (matrix[i][j] == 1 && paint[j] == min) {
				min++;
				time = 1;
				while (time == 1) {
					time = 0;
					for (int t = 0; t < neighbors.size(); t++)
						if (neighbors.at(t) == min) {
							min++;
							time = 1;
						}
				}
			}
		}
		paint[i] = min;
		while (neighbors.size() != 0)
			neighbors.pop_back();
	}
}
int main()  {
	int N;
	cin >> N;
	bool ** matrix;
	int *paint;
	matrix = new bool*[N];
	paint = new int[N];
	for (int i = 0; i < N; i++) {
		matrix[i] = new bool[N];
		paint[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}
	painting(matrix, paint, N);
	cout << endl;
	for (int i = 0; i < N; i++) {
		cout << paint[i] << " ";
	}
	return 0;
}
