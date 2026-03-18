#include <iostream>
using namespace std;

int main()
{
	int h, m, s, n, q, c, time = 0;
	cin >> h >> m >> s >> n;
	time = h * 3600 + m * 60 + s;
	for (int i = 0; i < n; i++) {
		cin >> q;
		if (q == 1) {
			cin >> c;
			time += c;
		}
		else if (q == 2) {
			cin >> c;
			time -= c;
		}
		else if (q == 3) {
			time %= 86400;
			if (time < 0) time += 86400;
			h = time / 3600;
			m = time % 3600 / 60;
			s = time % 60;
			if (s < 0) {
				m--;
				s += 60;
			}
			else if (s > 59) {
				m++;
				s %= 60;
			}
			if (m < 0) {
				h--;
				m += 60;
			}
			else if (m > 59) {
				h++;
				m %= 60;
			}
			if (h < 0) h +=
				24;
			else if (h > 23) h %= 24;
			cout << h << ' ' << m << ' ' << s << '\n';
		}
	}

	return 0;
}