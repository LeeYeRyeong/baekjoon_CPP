#include <iostream>
using namespace std;

int main()
{
	int k, n, m, money = 0;
	cin >> k >> n >> m;
	if (k * n > m) money = k * n - m;
	cout << money << endl;

	return 0;
}