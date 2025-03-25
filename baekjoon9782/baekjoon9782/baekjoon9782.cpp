#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int arr[100] = {};
	double mid = 0.0f;
	int n, count = 1;
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) cin >> arr[i];
		if (n % 2 == 0) mid = (static_cast<double>(arr[n / 2 - 1]) + arr[n / 2]) / 2.0;
		else mid = arr[n / 2];
		cout << "Case " << count++ << ": " << fixed << setprecision(1) << mid << '\n';
	}

	return 0;
}