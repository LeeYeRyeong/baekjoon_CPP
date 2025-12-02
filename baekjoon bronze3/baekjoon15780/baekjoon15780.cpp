#include <iostream>
using namespace std;

int main()
{
	int n, k, a, sum = 0;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> a;
		sum += (a % 2 == 0 ? a / 2 : a / 2 + 1);
	}
	cout << (sum < n ? "NO" : "YES");

	return 0;
}