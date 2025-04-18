#include <iostream>
using namespace std;

int main()
{
	double h, l, a, b;
	cin >> h >> l >> a >> b;
	cout << ((a / 2 <= h && b <= l) || (b / 2 <= h && a <= l) ? "YES" : "NO");

	return 0;
}