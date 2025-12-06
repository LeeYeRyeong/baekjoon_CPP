#include <iostream>
using namespace std;

int main()
{
	int a, b, c, temp, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}
		if (b > c) {
			temp = b;
			b = c;
			c = temp;
		}
		if (a > c) {
			temp = a;
			a = c;
			c = temp;
		}
		cout << "Case #" << i + 1 << ": ";
		if (a + b <= c) cout << "invalid!\n";
		else if (a == b && b == c) cout << "equilateral\n";
		else if (a == b || b == c || a == c) cout << "isosceles\n";
		else cout << "scalene\n";
	}

	return 0;
}