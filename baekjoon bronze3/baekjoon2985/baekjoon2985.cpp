﻿#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) cout << a << '+' << b << '=' << c;
	else if (a == b + c) cout << a << '=' << b << '+' << c;
	else if (a - b == c) cout << a << '-' << b << '=' << c;
	else if (a == b - c) cout << a << '=' << b << '-' << c;
	else if (a * b == c) cout << a << '*' << b << '=' << c;
	else if (a == b * c) cout << a << '=' << b << '*' << c;
	else if (a / static_cast<double>(b) == c) cout << a << '/' << b << '=' << c;
	else if (a == static_cast<double>(b) / c) cout << a << '=' << b << '/' << c;

	return 0;
}