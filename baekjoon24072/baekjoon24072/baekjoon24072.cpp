﻿#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a <= c && b > c) ? 1 : 0);

	return 0;
}