#include <iostream>
using namespace std;

int main()
{
	int a, b, x, y, dis = 0;
	cin >> a >> b >> x >> y;
	dis = ((y - a > 0 ? y - a : a - y) + (x - b > 0 ? x - b : b - x) < (x - a > 0 ? x - a : a - x) + (y - b > 0 ? y - b : b - y) ?
		(y - a > 0 ? y - a : a - y) + (x - b > 0 ? x - b : b - x) : (x - a > 0 ? x - a : a - x) + (y - b > 0 ? y - b : b - y));
	dis = (dis < (a - b > 0 ? a - b : b - a) ? dis : (a - b > 0 ? a - b : b - a));
	cout << dis;

	return 0;
}