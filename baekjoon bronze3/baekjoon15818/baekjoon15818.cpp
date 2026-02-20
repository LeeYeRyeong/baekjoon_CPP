#include <iostream>
using namespace std;

int main()
{
	long long n, m, mul = 1, number;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> number;
		mul *= (number % m);
		mul %= m;
	}
	cout << mul;

	return 0;
}