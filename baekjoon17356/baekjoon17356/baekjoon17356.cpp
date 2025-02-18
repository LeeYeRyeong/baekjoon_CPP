#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	double result;
	cin >> a >> b;
	result = 1 / (1 + pow(10, (b - a) / 400.0));
	cout << setprecision(16) << result;

	return 0;
}