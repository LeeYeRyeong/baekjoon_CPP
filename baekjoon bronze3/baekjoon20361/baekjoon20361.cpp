#include <iostream>
using namespace std;

int main()
{
	int n, x, k, a, b;
	cin >> n >> x >> k;
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		if (a == x) x = b;
		else if (b == x) x = a;
	}
	cout << x;

	return 0;
}