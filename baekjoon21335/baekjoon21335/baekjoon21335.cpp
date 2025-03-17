#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double area, r, length;
	cin >> area;
	r = sqrt(area / 3.141592);
	length = 2 * 3.141592 * r;
	cout << fixed << setprecision(9) << length;

	return 0;
}