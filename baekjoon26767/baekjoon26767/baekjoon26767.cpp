﻿#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 7 == 0 && i % 11 != 0) cout << "Hurra!";
		else if (i % 7 != 0 && i % 11 == 0) cout << "Super!";
		else if (i % 7 == 0 && i % 11 == 0) cout << "Wiwat!";
		else cout << i;
		cout << '\n';
	}

	return 0;
}