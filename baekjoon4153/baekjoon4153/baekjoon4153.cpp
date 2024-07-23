#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) return 0;
		a = a * a;
		b = b * b;
		c = c * c;
		if (a + b == c || a + c == b || b + c == a) cout << "right" << endl;
		else cout << "wrong" << endl;
	}

	return 0;
}