#include <iostream>
using namespace std;

int main()
{
	int sum = 0, t, n, result = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= j + 1; k++) {
				sum += k;
			}
			result += j * sum;
			sum = 0;
		}
		cout << result << '\n';
		result = 0;
	}

	return 0;
}