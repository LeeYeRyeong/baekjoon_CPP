#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double s, a, b;
	long long l;
	cin >> l;
	b = sqrt(((l * 2) * (l * 2)) - (l * l));
	a = sqrt((l * l) - (b / 2) * (b / 2));
	s = b * a * 1 / 2;
	cout << fixed << setprecision(15) << s;

	return 0;
}