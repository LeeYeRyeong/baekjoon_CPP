#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double const PI = 3.141592;
	int d1, d2;
	cin >> d1 >> d2;
	cout << fixed << setprecision(6);
	cout << d1 * 2 + static_cast<double>(d2) * PI * 2;

	return 0;
}