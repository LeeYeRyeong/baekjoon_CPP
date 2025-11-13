#include <iostream>
using namespace std;

int main()
{
	int a, b, c, count = 0;
	while (cin >> a >> b >> c) {
		cout << (b - a > c - b ? b - a - 1 : c - b - 1) << '\n';
	}

	return 0;
}