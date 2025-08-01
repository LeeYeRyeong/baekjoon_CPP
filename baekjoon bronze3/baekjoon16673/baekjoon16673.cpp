#include <iostream>
using namespace std;

int main()
{
	int sum = 0, n, k, p;
	cin >> n >> k >> p;
	for (int i = 1; i <= n; i++) {
		sum += (i * k + p * i * i);
	}
	cout << sum;

	return 0;
}