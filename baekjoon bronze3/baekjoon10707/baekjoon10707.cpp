#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, p, x = 0, y = 0;
	cin >> a >> b >> c >> d >> p;
	x = a * p;
	y = (p > c ? b + (p - c) * d : b);
	cout << (x < y ? x : y);

	return 0;
}