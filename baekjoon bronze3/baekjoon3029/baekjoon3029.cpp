#include <iostream>
using namespace std;

int main()
{
	int currentHour, currentMin, currentSec, throwHour, throwMin, throwSec, h, m, s;
	char c;
	cin >> currentHour >> c >> currentMin >> c >> currentSec >> throwHour >> c >> throwMin >> c >> throwSec;
	if (throwSec < currentSec) {
		throwMin--;
		throwSec += 60;
	}
	if (throwMin < currentMin) {
		throwHour--;
		throwMin += 60;
	}
	s = throwSec - currentSec;
	m = throwMin - currentMin;
	h = (throwHour < currentHour ? throwHour + 24 - currentHour : throwHour - currentHour);
	h = (h == 0 && s == 0 && m == 0 ? 24 : h);
	printf("%02d:%02d:%02d", h, m, s);

	return 0;
}