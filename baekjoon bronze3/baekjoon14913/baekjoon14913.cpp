#include <iostream>
using namespace std;

int main()
{
	int a, d, k, n;
	cin >> a >> d >> k;
	n = (((k - a) % d == 0 && ((k - a) * d >= 0)) ? (k - a) / d + 1 : -1);
	if (n == -1) cout << 'X';
	else cout << n;

	return 0;
}