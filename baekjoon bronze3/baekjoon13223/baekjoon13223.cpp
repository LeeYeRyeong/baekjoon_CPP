#include <iostream>
using namespace std;

int main()
{
	int startHour, startMin, startSec, endHour, endMin, endSec, h, m, s;
	char c;
	cin >> startHour >> c >> startMin >> c >> startSec >> endHour >> c >> endMin >> c >> endSec;
	if (endSec < startSec) {
		endMin--;
		endSec += 60;
	}
	if (endMin < startMin) {
		endHour--;
		endMin += 60;
	}
	if (endHour < startHour) endHour += 24;
	h = endHour - startHour, m = endMin - startMin, s = endSec - startSec;
	h = (h == 24 ? 0 : h);
	m = (m == 60 ? 0 : m);
	s = (s == 60 ? 0 : s);
	printf("%02d:%02d:%02d", h, m, s);

	return 0;
}