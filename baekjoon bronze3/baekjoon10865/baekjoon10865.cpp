#include <iostream>
using namespace std;

int main()
{
	int friendCount[1000000] = {};
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		friendCount[a - 1]++;
		friendCount[b - 1]++;
	}
	for (int i = 0; i < n; i++) cout << friendCount[i] << '\n';

	return 0;
}