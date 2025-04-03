#include <iostream>
using namespace std;

int main()
{
	int t, x, n, count, aval;
	int student[10] = {};
	bool check = true;
	cin >> t >> x >> n;
	for (int i = 0; i < n; i++) {
		cin >> count;
		for (int j = 0; j < count; j++) {
			cin >> aval;
			if (aval == x) student[i] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (student[i] != 1) {
			check = false;
			break;
		}
	}
	cout << (check ? "YES" : "NO");

	return 0;
}