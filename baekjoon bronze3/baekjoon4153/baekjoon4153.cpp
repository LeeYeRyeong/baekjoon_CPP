#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		cout << ((sqrt(pow(a, 2) + pow(b, 2)) == c) || sqrt(pow(c, 2) + pow(b, 2)) == a || sqrt(pow(a, 2) + pow(c, 2)) == b ? "right\n" : "wrong\n");
	}

	return 0;
}