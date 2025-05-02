#include <iostream>
using namespace std;

int main()
{
	int n, fac = 1;
	cin >> n;
	if (n > 1) {
		for (int i = 1; i <= n; i++) fac *= i;
	}
	cout << fac;

	return 0;
}