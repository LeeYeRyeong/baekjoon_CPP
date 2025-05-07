#include <iostream>
using namespace std;

int main()
{
	int t, w, h, n, room = 0, count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		for (int j = 1; j <= w; j++) {
			for (int k = 1; k <= h; k++) {
				if (n == ++count) room += (k * 100 + j);
			}
			if (n <= count) {
				cout << room << '\n';
				break;
			}
		}
		room = 0;
		count = 0;
	}

	return 0;
}