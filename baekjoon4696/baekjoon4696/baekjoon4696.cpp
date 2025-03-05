#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n;
	while (1) {
		cin >> n;
		if (n == 0.0) break;
		cout << fixed << setprecision(2) << 1 + n + n * n + n * n * n + n * n * n * n << '\n';
	}

	return 0;
}