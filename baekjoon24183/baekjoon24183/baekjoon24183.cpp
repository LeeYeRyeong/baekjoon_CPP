#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double gram;
	int a, b, c;
	cin >> a >> b >> c;
	gram = a * 0.229 * 0.324 * 2 + b * 0.297 * 0.420 * 2+ c * 0.210 * 0.297;
	cout << fixed << setprecision(6) << gram;

	return 0;
}