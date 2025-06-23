#include <iostream>
using namespace std;

int main()
{
	int n, t, c, p, amount = 0;
	cin >> n >> t >> c >> p;
	amount = ((n - 1) / t) * c * p;
	cout << amount;

	return 0;
}