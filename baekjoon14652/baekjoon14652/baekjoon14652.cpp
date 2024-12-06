#include <iostream>
using namespace std;

int main()
{
	int n, m, k, count = 0;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (count++ == k) {
				cout << i << " " << j;
				break;
			}
			//count++;
		}
		if (count > k) break;
	}

	return 0;
}