#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, e = 0, sum = 0;
	int n, value;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		e += value / static_cast<double>(n);
		sum += value;
	}
	if (n == 0 || e == 0) cout << "divide by zero";
	else {
		a = sum / n;
		cout << fixed << setprecision(2) << (a / e);
	}

	return 0;
}