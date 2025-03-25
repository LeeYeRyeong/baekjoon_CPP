#include <iostream>
using namespace std;

int main()
{
	int n, m, errorCount = 0;
	char image[100][100] = {}, reverseImage[100][100] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> image[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> reverseImage[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (image[i][j] == reverseImage[i][j]) errorCount++;
		}
	}
	cout << errorCount;

	return 0;
}