#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, prize, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a == b && b == c) prize = 10000 + a * 1000;
		else if (a == b || b == c || c == a) prize = 1000 + (a == b || a == c ? a : b) * 100;
		else prize = 100 * ((a > b && b > c) || (a > c && b < c) ? a : (b > a && a > c) || (b > c && a < c) ? b : c);
		if (max < prize) max = prize;
	}
	cout << max;

	return 0;
}