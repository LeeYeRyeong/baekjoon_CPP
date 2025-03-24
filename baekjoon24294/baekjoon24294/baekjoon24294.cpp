#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << a + b * 2 + c + d * 2 + (a < c ? c - a : a - c) + 4;

	return 0;
}