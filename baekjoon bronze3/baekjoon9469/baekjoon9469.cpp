#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, b, m, f, d;
	int n, o;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> o >> m >> a >> b >> f;
		d = (m / (a + b)) * f;
		cout << o << ' ' << fixed << setprecision(6) << d << '\n';
	}

	return 0;
}