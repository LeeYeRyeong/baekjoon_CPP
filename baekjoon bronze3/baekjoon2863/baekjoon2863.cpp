#include <iostream>
using namespace std;

int main()
{
	double result = 0;
	int a, b, c, d, count = 0;
	cin >> a >> b >> c >> d;
	result = static_cast<double>(a) / c + static_cast<double>(b) / d;
	if (result < static_cast<double>(c) / d + static_cast<double>(a) / b) {
		result = static_cast<double>(c) / d + static_cast<double>(a) / b;
		count = 1;
	}
	if (result < static_cast<double>(d) / b + static_cast<double>(c) / a) {
		result = static_cast<double>(d) / b + static_cast<double>(c) / a;
		count = 2;
	}
	if (result < static_cast<double>(b) / a + static_cast<double>(d) / c) {
		result = static_cast<double>(b) / a + static_cast<double>(d) / c;
		count = 3;
	}
	cout << count;

	return 0;
}