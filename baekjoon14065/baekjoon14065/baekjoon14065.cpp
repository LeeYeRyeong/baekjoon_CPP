#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double m, l;
	cin >> m;
	l = (100000 / (m * 1609.344)) * 3.785411784;
	cout << fixed << setprecision(6) << l;

	return 0;
}