#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int q, n;
	bool check = false;
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> n;
		for (int j = 0; pow(2, j) <= n; j++) {
			if (pow(2, j) == n) check = true;
		}
		cout << (check ? 1 : 0) << '\n';
		check = false;
	}

	return 0;
}