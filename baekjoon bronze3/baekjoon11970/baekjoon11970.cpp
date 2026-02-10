#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, line;
	cin >> a >> b >> c >> d;
	if ((b < c) || (a > d)) line = (b - a) + (d - c);
	else line = (b > d ? b : d) - (a < c ? a : c);
	cout << line;

	return 0;
}