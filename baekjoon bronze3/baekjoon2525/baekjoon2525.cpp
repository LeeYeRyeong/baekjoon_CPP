#include <iostream>
using namespace std;

int main()
{
	int currentHour, currentMin, time;
	cin >> currentHour >> currentMin >> time;
	currentMin += time;
	currentHour += currentMin / 60;
	cout << (currentHour > 23 ? currentHour % 24 : currentHour) << ' ' << currentMin % 60;

	return 0;
}