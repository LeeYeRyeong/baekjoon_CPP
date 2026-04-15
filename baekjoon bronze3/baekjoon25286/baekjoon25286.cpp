#include <iostream>
using namespace std;

int main()
{
	int t, year, m;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> year >> m;
		if (m == 1) cout << year - 1 << ' ' << 12 << ' ' << 31 << '\n';
		else if (m == 3) {
			if (((year % 100 == 0) && (year % 400 == 0)) || (year % 100 != 0 && year % 4 == 0)) cout << year << ' ' << 2 << ' ' << 29 << '\n';
			else cout << year << ' ' << 2 << ' ' << 28 << '\n';
		}
		else if (m == 2 || m == 4 || m == 8 || m == 9 || m == 11) cout << year << ' ' << m - 1 << ' ' << 31 << '\n';
		else cout << year << ' ' << m - 1 << ' ' << 30 << '\n';
	}

	return 0;
}