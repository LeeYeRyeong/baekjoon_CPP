#include <iostream>
using namespace std;

int main()
{
	int n, lemon, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> lemon;
		if (max < (lemon - (n - i))) max = lemon - (n - i);
	}
	cout << max;

	return 0;
}