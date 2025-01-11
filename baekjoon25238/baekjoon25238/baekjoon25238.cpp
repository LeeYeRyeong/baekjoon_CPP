#include <iostream>
using namespace std;

int main()
{
	double d = 0.0;
	int a, b;
	cin >> a >> b;
	d = a - static_cast<double>(a) * (b * 0.01);
	cout << (d >= 100.0 ? 0 : 1);

	return 0;
}