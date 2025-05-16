#include <iostream>
using namespace std;

int main()
{
	int money, q = 0, d = 0, n = 0, p = 0, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> money;
		q = money / 25;
		money %= 25;
		d = money / 10;
		money %= 10;
		n = money / 5;
		money %= 5;
		p = money;
		cout << q << ' ' << d << ' ' << n << ' ' << p << '\n';
		q, d, n, p = 0, 0, 0, 0;
	}

	return 0;
}