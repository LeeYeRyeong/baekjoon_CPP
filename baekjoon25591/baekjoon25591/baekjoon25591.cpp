#include <iostream>
using namespace std;

int main()
{
	int n, m, a, b, c, d, q, r, result1 = 0, result2 = 0;
	cin >> n >> m;
	a = 100 - n;
	b = 100 - m;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;
	result1 = (q > 0 ? q + c : c);
	result2 = r;
	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << '\n';
	cout << result1 << " " << result2;

	return 0;
}