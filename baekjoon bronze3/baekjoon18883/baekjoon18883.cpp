#include <iostream>
using namespace std;

int main()
{
	int n, m, count = 1;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << count++ << (j != m - 1 ? ' ' : '\n');
	}

	return 0;
}