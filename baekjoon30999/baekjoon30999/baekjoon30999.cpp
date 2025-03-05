#include <iostream>
using namespace std;

int main()
{
	int n, m, count = 0, good = 0;
	char c;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;
			if (c == 'O') good++;
		}
		if (good > m / 2) count++;
		good = 0;
	}
	cout << count;

	return 0;
}