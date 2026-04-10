#include <iostream>
using namespace std;

int main()
{
	int n, m, k, next;
	cin >> n >> m >> k;
	if (k < 3) next = (n + ((m + (k - 3) % n))) % n;
	else next = (m + (k - 3)) % n;
	cout << (next == 0 ? n : next);

	return 0;
}