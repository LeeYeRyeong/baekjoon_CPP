#include <iostream>
using namespace std;

int main()
{
	int t, n, min = 1000000, max = -1000000, num;
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> num;
			if (num > max) max = num;
			if (num < min) min = num;
		}
		cout << min << ' ' << max << '\n';
		min = 1000000, max = -1000000;
	}

	return 0;
}