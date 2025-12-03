#include <iostream>
using namespace std;

int main()
{
	int y, c, p;
	cin >> y >> c >> p;
	cout << ((y < c / 2 ? y : c / 2) < p ? (y < c / 2 ? y : c / 2) : p);

	return 0;
}