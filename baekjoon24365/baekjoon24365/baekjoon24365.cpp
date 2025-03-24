#include <iostream>
using namespace std;

int main()
{
	int a, b, c, mid = 0;
	cin >> a >> b >> c;
	mid = (a + b + c) / 3;
	cout << (mid - a) * 2 + (mid - b);

	return 0;
}