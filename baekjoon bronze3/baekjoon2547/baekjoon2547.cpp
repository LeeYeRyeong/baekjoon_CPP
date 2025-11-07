#include <iostream>
using namespace std;

int main()
{
	long long sum = 0, candy;
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> candy;
			sum = (sum + candy) % n;
		}
		cout << (sum % n == 0 ? "YES\n" : "NO\n");
		sum = 0;
	}

	return 0;
}