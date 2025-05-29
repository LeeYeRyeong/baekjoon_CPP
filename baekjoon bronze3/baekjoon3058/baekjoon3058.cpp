#include <iostream>
using namespace std;

int main()
{
	int n, min = 100, t, sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> n;
			if (n % 2 == 0) {
				sum += n;
				if (min > n) min = n;
			}
		}
		cout << sum << ' ' << min << '\n';
		sum = 0, min = 100;
	}

	return 0;
}