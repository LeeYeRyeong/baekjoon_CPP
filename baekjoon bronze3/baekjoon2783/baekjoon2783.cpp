#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double result, div;
	int x, y, n, xe, ye;
	cin >> x >> y >> n;
	result = x * (1000.00 / y);
	for (int i = 0; i < n; i++) {
		cin >> xe >> ye;
		div = xe * (1000.00 / ye);
		result = (result > div ? div : result);
	}
	cout << fixed << setprecision(2) << result;

	return 0;
}