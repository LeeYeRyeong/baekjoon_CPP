#include <iostream>
using namespace std;

int main()
{
	int d, h, m;
	int time = 0;
	cin >> d >> h >> m;
	if (d < 11 || d <= 11 && h < 11 || (d <= 11 && h <= 11 && m < 11)) time = -1;
	else {
		if (m < 11) {
			h--;
			m += 60;
		}
		if (h < 11) {
			d--;
			h += 24;
		}
		time += (m - 11) + ((h - 11) * 60) + (d - 11) * 24 * 60;
	}
	cout << time;

	return 0;

}