#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double grade = 0.0, g;
	int t, n, c, total = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> c >> g;
			total += c;
			grade += c * g;
		}
		cout << fixed << setprecision(1) << total << ' ' << grade / total << '\n';
		total = 0, grade = 0.0;
	}

	return 0;
}