#include <iostream>
using namespace std;

int main()
{
	int t, a = 0, b = 0, c = 0;
	cin >> t;
	a = t / 300, t %= 300;
	b = t / 60, t %= 60;
	c = t / 10, t %= 10;
	if (t != 0) cout << -1;
	else cout << a << ' ' << b << ' ' << c;

	return 0;
}