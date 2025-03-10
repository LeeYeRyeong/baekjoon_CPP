#include <iostream>
using namespace std;

int main()
{
	int a, b, c, big = -1, count = 0;
	cin >> a >> b >> c;
	if (big < a) big = a;
	if (big < b) big = b;
	if (big < c) big = c;
	count = big - a + big - b + big - c;
	cout << count;

	return 0;
}