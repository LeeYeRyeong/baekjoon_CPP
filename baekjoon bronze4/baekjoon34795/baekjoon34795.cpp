#include <iostream>
using namespace std;

int main()
{
	int p, d, m;
	cin >> m >> d;
	p = (d % m == 0 ? d / m : d / m + 1);
	cout << p;

	return 0;
}