#include <iostream>
using namespace std;

int main()
{
	int a, x, b, y, t;
	int aCost = 0, bCost = 0;
	cin >> a >> x >> b >> y >> t;
	aCost = ((t - 30) > 0 ? t - 30 : 0) * x * 21 + a;
	bCost = ((t - 45) > 0 ? t - 45 : 0) * y * 21 + b;
	cout << aCost << " " << bCost << endl;

	return 0;
}