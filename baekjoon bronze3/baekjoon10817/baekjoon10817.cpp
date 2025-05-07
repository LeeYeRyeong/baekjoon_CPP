#include <iostream>
using namespace std;

int main()
{
	int a, b, c, mid;
	cin >> a >> b >> c;
	if ((a >= b && a <= c) || (a >= c && a <= b)) mid = a;
	if ((b >= a && b <= c) || (b >= c && b <= a)) mid = b;
	if ((c >= b && c <= a) || (c >= a && c <= b)) mid = c;
	cout << mid;

	return 0;
}