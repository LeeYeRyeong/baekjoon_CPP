#include <iostream>
using namespace std;

int main()
{
	int a[100][100] = {}, b[100][100] = {}, merge[100][100] = {};
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> b[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) merge[i][j] = a[i][j] + b[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << merge[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}