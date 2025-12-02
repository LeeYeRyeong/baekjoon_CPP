#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, value;
	int count = 1;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (a == -1) value = ((c * c) - (b * b) > 0 ? sqrt((c * c) - (b * b)) : (c * c) - (b * b));
		else if (b == -1) value = ((c * c) - (a * a) > 0 ? sqrt((c * c) - (a * a)) : (c * c) - (a * a));
		else if (c == -1) value = sqrt((a * a) + (b * b));
		cout << "Triangle #" << count++ << '\n';
		if (value <= 0)cout << "Impossible." << "\n\n";
		else {
			if (a == -1) cout << "a = " << fixed << setprecision(3) << value << "\n\n";
			else if (b == -1) cout << "b = " << fixed << setprecision(3) << value << "\n\n";
			else if (c == -1) cout << "c = " << fixed << setprecision(3) << value << "\n\n";
		}
	}

	return 0;
}