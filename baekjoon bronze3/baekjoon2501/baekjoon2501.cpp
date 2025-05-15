#include <iostream>
using namespace std;

int main()
{
	int n, k, count = 0, result = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && ++count == k) result = i;
	}
	cout << result;

	return 0;
}