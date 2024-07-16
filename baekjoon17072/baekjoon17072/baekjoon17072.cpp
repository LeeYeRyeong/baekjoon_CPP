#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int pic[400][400] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int r, g, b;
			cin >> r >> g >> b;
			pic[i][j] = 2126 * r + 7152 * g + 722 * b;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (pic[i][j] >= 0 && pic[i][j] < 510000) cout << "#";
			else if (pic[i][j] < 1020000) cout << "o";
			else if (pic[i][j] < 1530000) cout << "+";
			else if (pic[i][j] < 2040000) cout << "-";
			else cout << ".";
		}
		cout << endl;
	}

	return 0;
}