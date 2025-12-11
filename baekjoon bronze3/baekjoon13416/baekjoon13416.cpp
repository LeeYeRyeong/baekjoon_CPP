#include <iostream>
using namespace std;

int main()
{
	int t, n, a, b, c, max = 0, total = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a >> b >> c;
			if (a > max) max = a;
			if (b > max) max = b;
			if (c > max) max = c;
			total += max;
			max = 0;
		}
		cout << total << '\n';
		total = 0;
	}

	return 0;
}