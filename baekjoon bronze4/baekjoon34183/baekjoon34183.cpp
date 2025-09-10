#include <iostream>
using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << ((n * 3) - m > 0 ? (n * 3 - m) * a + b : 0);

	return 0;
}