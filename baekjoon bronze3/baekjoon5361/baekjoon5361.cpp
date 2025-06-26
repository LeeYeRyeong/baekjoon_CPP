#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double amount = 0;
	int n, a, b, c, d, e;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d >> e;
		amount = a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
		cout << '$' << fixed << setprecision(2) << amount << '\n';
		amount = 0;
	}

	return 0;
}