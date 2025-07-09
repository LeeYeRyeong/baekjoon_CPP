#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << "Pairs for " << n << ": ";
		for (int j = 1; j <= n / 2; j++) {
			if (j == n - j) continue;
			if (j > 1) cout << ", ";
			cout << j << ' ' << n - j;
		}
		cout << '\n';
	}

	return 0;
}