#include <iostream>
using namespace std;

int main()
{
	int t, n, m, number = -1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		if (n >= 12 && m >= 4) number = (11 * m) + 4;
		cout << number << '\n';
		number = -1;
	}

	return 0;
}