#include <iostream>
using namespace std;

int main()
{
	int n, m, length = 0;
	cin >> n >> m;
	length = (((n - 1) / 4) > ((m - 1) / 4) ? ((n - 1) / 4) - ((m - 1) / 4) : ((m - 1) / 4) - ((n - 1) / 4)) +
		(((n - 1) % 4) > ((m - 1) % 4) ? ((n - 1) % 4) - ((m - 1) % 4) : ((m - 1) % 4) - ((n - 1) % 4));
	cout << length;

	return 0;
}