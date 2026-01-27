#include <iostream>
using namespace std;

int main()
{
	int l, r, a, player = 0;
	cin >> l >> r >> a;
	if (l + a < r) player = (l + a) * 2;
	else if (r + a < l) player = (r + a) * 2;
	else if (l == r) player = (l + (a / 2)) * 2;
	else if ((l + r + a) % 2 == 0) player = l + r + a;
	else player = l + r + a - 1;
	cout << player;

	return 0;
}