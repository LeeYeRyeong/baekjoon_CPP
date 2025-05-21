#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double pi = 3.14159265359;
	double n, areaU = 0.0, areaT = 0.0;
	cin >> n;
	areaU = n * n * pi;
	areaT = n * n * 2;
	cout << fixed << setprecision(6) << areaU << '\n' << areaT;

	return 0;
}