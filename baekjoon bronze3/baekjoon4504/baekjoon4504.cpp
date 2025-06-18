#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	while (1) {
		cin >> m;
		if (m == 0) break;
		cout << m << (m % n == 0 ? " is a multiple of " : " is NOT a multiple of ") << n << ".\n";
	}

	return 0;
}