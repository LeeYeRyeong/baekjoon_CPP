#include <iostream>
using namespace std;

int main()
{
	int t, n, index = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		while (n > 0) {
			if (n % 2 == 1) cout << index << ' ';
			n /= 2, index++;
		}
		cout << '\n';
		index = 0;
	}

	return 0;
}