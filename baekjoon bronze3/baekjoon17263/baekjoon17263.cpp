#include <iostream>
using namespace std;

int main()
{
	int n, max = -1, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > max) max = a;
	}
	cout << max;

	return 0;
}