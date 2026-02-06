#include <iostream>
using namespace std;

int main()
{
	int matrix[1000][1000] = {};
	int n, a, b, score = 0;
	bool check = true;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> matrix[i][j];
	}
	score = matrix[a - 1][b - 1];
	for (int i = 0; i < n; i++) {
		if (matrix[a - 1][i] > score) check = false;
	}
	for (int i = 0; i < n; i++) {
		if (matrix[i][b - 1] > score) check = false;
	}
	cout << (check ? "HAPPY" : "ANGRY");

	return 0;
}