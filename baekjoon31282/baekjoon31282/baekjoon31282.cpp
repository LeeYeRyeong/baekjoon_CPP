#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	cout << (n % (m - k) == 0 ? n / (k - m) : n / (k - m) + 1);

	return 0;
}