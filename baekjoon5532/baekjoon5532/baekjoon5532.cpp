#include <iostream>
using namespace std;

int main()
{
	int l, a, b, c, d, date;
	cin >> l >> a >> b >> c >> d;
	date = (a % c != 0 ? a / c + 1 : a / c) > (b % d != 0 ? b / d + 1 : b / d) ? (a % c != 0 ? a / c + 1 : a / c) : (b % d != 0 ? b / d + 1 : b / d);
	cout << l - date << endl;

	return 0;
}