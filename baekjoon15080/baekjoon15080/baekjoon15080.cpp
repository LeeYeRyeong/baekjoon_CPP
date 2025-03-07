#include <iostream>
using namespace std;

int main()
{
	int startHour, startMin, startSec, endHour, endMin, endSec, time = 0;
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
	time += (endSec - startSec) + ((endMin - startMin) * 60) + ((endHour - startHour) * 60 * 60);
	cout << time;

	return 0;
}