#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double h;
	int k, d1, d2;
	cin >> k >> d1 >> d2;
	h = (k * k) - ((d1 - d2) / 2.0) * ((d1 - d2) / 2.0);
	cout << fixed << setprecision(2) << h;

	return 0;
}