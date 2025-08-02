#include <iostream>
using namespace std;

int main()
{
	int t, n, k, count = 0, candy;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		for (int j = 0; j < n; j++) {
			cin >> candy;
			count += candy / k;
		}
		cout << count << '\n';
		count = 0;
	}

	return 0;
}