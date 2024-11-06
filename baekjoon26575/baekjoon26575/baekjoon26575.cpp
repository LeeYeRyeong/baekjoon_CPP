#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double d, f, p;
		cin >> d >> f >> p;
		cout.precision(2);
		cout << "$" << fixed << d * f * p << endl;
	}

	return 0;
}