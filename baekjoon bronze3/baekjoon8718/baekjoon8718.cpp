#include <iostream>
using namespace std;

int main()
{
	int x, k, n;
	cin >> x >> k;
	x *= 1000, k *= 1000;
	n = k * 2 + k * 4 + k;
	if (n > x) n = k * 2 + k + k / 2;
	if (n > x) n = k + k / 2 + k / 4;
	if (n > x) n = 0;
	cout << n;

	return 0;
}