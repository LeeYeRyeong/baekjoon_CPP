#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double t, result;
	cin >> t;
	result = pow(t / 2, 2);
	cout << fixed << setprecision(0) << result;

	return 0;
}