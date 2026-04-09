#include <iostream>
using namespace std;

int main()
{
	int x, y, n;
	bool time = false, date = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if ((x >= 0 && x < 24) && (y >= 0 && y < 60)) time = true;
		if ((x >= 1 && x <= 12)) {
			if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) {
				if (y >= 1 && y < 32) date = true;
			}
			else if (x == 2 && (y >= 1 && y < 30)) date = true;
			else if (x == 4 || x == 6 || x == 9 || x == 11) {
				if (y >= 1 && y < 31) date = true;
			}
		}
		cout << (time ? "Yes " : "No ") << (date ? "Yes\n" : "No\n");
		time = false, date = false;
	}

	return 0;
}