#include <iostream>
using namespace std;

int main()
{
	int h, m, s, time;
	cin >> h >> m >> s >> time;
	s += time;
	if (s >= 60) {
		m += s / 60;
		s = s % 60;
	}
	if (m >= 60) {
		h += m / 60;
		m %= 60;
	}
	if (h >= 24)h %= 24;
	cout << h << " " << m << " " << s << " " << endl;

	return 0;
}