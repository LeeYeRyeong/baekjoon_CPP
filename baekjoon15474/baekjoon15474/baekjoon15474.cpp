#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	cout << ((n % a == 0 ? (n / a) * b : (n / a + 1) * b) < (n % c == 0 ? (n / c) * d : (n / c + 1) * d) ?
		(n % a == 0 ? (n / a) * b : (n / a + 1) * b) : (n % c == 0 ? (n / c) * d : (n / c + 1) * d));

	return 0;
}