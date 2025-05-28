#include <iostream>
using namespace std;

int main()
{
	int n, m, k, team = 0;
	cin >> n >> m >> k;
	while (1) {
		n -= 2, m -= 1;
		if (n + m < k || n < 0 || m < 0) break;
		team++;
	}
	cout << team;

	return 0;
}