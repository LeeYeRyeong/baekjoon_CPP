#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	cout << ((n > m ? (n - m) : m - n) > 1 ? (n > m ? m * 2 + 1 : n * 2 + 1) : n + m);

	return 0;
}