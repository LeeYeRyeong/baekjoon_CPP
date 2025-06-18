#include <iostream>
using namespace std;

int main()
{
	int a, b, c, count = 0;
	cin >> a >> b >> c;
	while (!(b - a == 1 && c - b == 1)) {
		count++;
		if (b - a < c - b) {
			a = b;
			b++;
		}
		else {
			c = b;
			b--;
		}
	}
	cout << count;

	return 0;
}