﻿#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c; 
		cout << "Scenario #" << i + 1 << ":\n";
		if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) cout << "yes\n\n";
		else cout << "no\n\n";
	}

	return 0;
}