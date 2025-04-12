#include <iostream>
using namespace std;

int main()
{
	int n, m, count = 0;
	char correct[100][100] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> correct[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (correct[i][j] == '+') {
				count++;
				break;
			}
		}
	}
	cout << count;

	return 0;
}