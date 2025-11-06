#include <iostream>
using namespace std;

int main()
{
	int money[11] = {};
	double l;
	int n, b, s, total = 0;
	for (int i = 0; i < 11; i++) cin >> money[i];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> l >> s;
		if (l >= 2.0 && s >= 17) total += money[b];
	}
	cout << total;

	return 0;
}