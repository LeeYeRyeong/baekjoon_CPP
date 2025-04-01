#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	cout << (n > 2 && m > 2 ? (n * m) - (n - 2) * (m - 2) : n * m);

	return 0;
}