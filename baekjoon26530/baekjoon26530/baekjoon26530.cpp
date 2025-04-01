#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name;
	double prize, sum = 0;
	int t, n, count;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> name >> count >> prize;
			sum += prize * count;
		}
		cout << "$" << fixed << setprecision(2) << sum << '\n';
		sum = 0;
	}

	return 0;
}