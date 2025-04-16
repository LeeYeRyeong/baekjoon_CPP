#include <iostream>
using namespace std;

int main()
{
	int t, n, a, d, sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> a >> d;
		for (int j = 0; j < n; j++) sum += a + d * j;
		cout << sum << '\n';
		sum = 0;
	}

	return 0;
}