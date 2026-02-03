#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, tempA, tempB, tempC, tempD, count = 0;
	while (1) {
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		while (!(a == b && b == c && c == d)) {
			count++;
			tempA = a, tempB = b, tempC = c, tempD = d;
			a = (tempA - tempB < 0 ? (tempB - tempA) : tempA - tempB);
			b = (tempB - tempC < 0 ? (tempC - tempB) : tempB - tempC);
			c = (tempC - tempD < 0 ? (tempD - tempC) : tempC - tempD);
			d = (tempD - tempA < 0 ? (tempA - tempD) : tempD - tempA);
		}
		cout << count << '\n';
		count = 0;
	}

	return 0;
}