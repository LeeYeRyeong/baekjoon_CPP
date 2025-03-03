#include <iostream>
using namespace std;

int main()
{
	int a, b, c, result;
	cin >> a >> b >> c;
	if ((a >= b && a <= c) || (b >= a && a >= c)) result = a;
	if ((a <= b && b <= c) || (a >= b && b >= c)) result = b;
	if ((c >= a && c <= b) || (a >= c && c >= b)) result = c;
	cout << result;

	return 0;
}