﻿#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a * b == c * d ? 'E' : (a * b > c * d ? 'M' : 'P'));

	return 0;
}