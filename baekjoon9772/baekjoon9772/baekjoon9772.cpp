#include <iostream>
using namespace std;

int main()
{
	double x, y;
	do {
		cin >> x >> y;
		if (x > 0 && y > 0) cout << "Q1\n";
		else if (x < 0 && y > 0) cout << "Q2\n";
		else if (x < 0 && y < 0) cout << "Q3\n";
		else if (x > 0 && y < 0) cout << "Q4\n";
		else cout << "AXIS\n";
	} while (x != 0 || y != 0);

	return 0;
}