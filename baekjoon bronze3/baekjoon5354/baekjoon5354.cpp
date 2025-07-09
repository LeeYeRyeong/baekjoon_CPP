#include <iostream>
using namespace std;

int main()
{
	int n, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (j == 0 || j == n - 1 || k == 0 || k == n - 1) cout << '#';
				else cout << 'J';
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}