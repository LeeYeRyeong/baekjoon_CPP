#include <iostream>
using namespace std;

int main()
{
	int t, s, n, p, q, sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s >> n;
		sum += s;
		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			sum += p * q;
		}
		cout << sum << '\n';
		sum = 0;
	}

	return 0;
}