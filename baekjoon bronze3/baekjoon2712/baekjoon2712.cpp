#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string s;
	double n;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> s;
		if (s == "kg") {
			n *= 2.2046;
			s = "lb";
		}
		else if (s == "l") {
			n *= 0.2642;
			s = "g";
		}
		else if (s == "lb") {
			n *= 0.4536;
			s = "kg";
		}
		else if (s == "g") {
			n *= 3.7854;
			s = "l";
		}
		cout << fixed << setprecision(4) << n << ' ' << s << '\n';
	}

	return 0;
}