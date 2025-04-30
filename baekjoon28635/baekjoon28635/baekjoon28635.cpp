#include <iostream>
using namespace std;

int main()
{
	int m, a, b, button = 0;
	cin >> m >> a >> b;
	button = (a > b ? m - a + b : b - a);
	cout << button;

	return 0;
}