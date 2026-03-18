#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c;
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	a = (d1 + (d2 - d3)) / 2.0;
	b = d1 - a;
	c = d2 - a;
	if (a <= 0 || b <= 0 || c <= 0) cout << -1;
	else cout << 1 << '\n' << fixed << setprecision(1) << a << ' ' << b << ' ' << c;

	return 0;
}