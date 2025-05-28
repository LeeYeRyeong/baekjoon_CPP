#include <iostream>
using namespace std;

int main()
{
	int t, n, sum = 0, num;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> num;
			sum += num;
		}
		cout << sum << '\n';
		sum = 0;
	}

	return 0;
}