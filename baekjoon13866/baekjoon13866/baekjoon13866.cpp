﻿#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << ((a + d) - (b + c) > 0 ? (a + d) - (b + c) : (b + c) - (a + d));
	return 0;
}