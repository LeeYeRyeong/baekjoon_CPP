#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, time = 0;
	cin >> a >> b >> c >> d >> e;
	if (a < 0) time = a * -1 * c + d + (b * e);
	else time = (b - a) * e;

	cout << time;

	return 0;
}