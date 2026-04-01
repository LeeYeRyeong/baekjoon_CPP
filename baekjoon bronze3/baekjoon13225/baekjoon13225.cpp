#include <iostream>
using namespace std;

int main()
{
	int t, n, count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			if (n % j == 0) count++;
		}
		cout << n << ' ' << count << '\n';
		count = 0;
	}

	return 0;
}