#include <iostream>
using namespace std;

int main()
{
	int t, n, gap;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		gap = n - 1;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (k == 0 || k == n - 1 || (j <= n / 2 && j == k) || (j <= n / 2 && j + gap == k)) cout << '#';
				else cout << '.';
			}
			cout << '\n';
			gap -= 2;
		}
	}

	return 0;
}