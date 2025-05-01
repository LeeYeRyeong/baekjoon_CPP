#include <iostream>
using namespace std;

int main()
{
	int p, q, a, b;
	cin >> p >> q >> a >> b;
	cout << (q > p ? p * a + (q - p) * b : q * a);

	return 0;
}