#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, n, gap = 1000000;
	while (1) {
		cin >> b >> n;
		if (b == 0 && n == 0) break;
		for (int i = 1; pow(i, n) <= b; i++) {
			if (b - pow(i, n) < gap) {
				a = i;
				gap = b - pow(i, n);
			}
		}
		a = (gap < pow(a + 1, n) - b ? a : a + 1);
		cout << a << '\n';
		gap = 1000000;
	}

	return 0;
}