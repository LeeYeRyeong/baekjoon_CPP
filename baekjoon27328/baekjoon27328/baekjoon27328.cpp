﻿#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << (a == b ? 0 : (a < b ? -1 : 1)) << endl;

	return 0;
}