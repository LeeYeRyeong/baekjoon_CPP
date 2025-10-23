#include <iostream>
using namespace std;

int main()
{
	static const int feet = 5280;
	double s, d, t;
	cin >> s >> d >> t;
	cout << ((s * feet / 3600.0) * t < d ? "FAILED TEST" : "MADE IT");

	return 0;
}