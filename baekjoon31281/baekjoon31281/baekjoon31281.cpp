#include <iostream>
using namespace std;

int main()
{
	long a, b, c, mid = 0;
	cin >> a >> b >> c;
	if (a > b && a < c || a >c && a < b) mid = a;
	else if (b > a && b < c || b > c && b < a) mid = b;
	else if (c > a && c < b || c > b && c < a) mid = c;
	cout << mid;

	return 0;
}