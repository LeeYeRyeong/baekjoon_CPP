#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double length, sum = 0, result;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> length;
		sum += pow(length, 3);
	}
	result = cbrt(sum * 1.0);
	cout << fixed << setprecision(13) << result;

	return 0;
}