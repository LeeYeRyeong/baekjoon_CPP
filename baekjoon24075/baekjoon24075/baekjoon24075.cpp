﻿#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	cout << (n + m > n - m ? n + m : n - m) << '\n' << (n + m < n - m ? n + m : n - m);

	return 0;
}