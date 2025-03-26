#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << fixed << setprecision(1) << (a > b ? a - b : b - a) << '\n';
	}

	return 0;
}