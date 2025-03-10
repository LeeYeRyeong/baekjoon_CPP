#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	long n;
	double result = 0.0;
	cin >> n;
	result = 4.0 * (sqrt(n));
	cout << fixed << setprecision(8) << result;

	return 0;
}