#include <iostream>
using namespace std;

int main()
{
	int a[3] = {};
	int floor, time = 0, max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
		if (max < a[i]) {
			max = a[i];
			floor = i;
		}
	}

	if ((floor == 0 && max < a[1] + a[2]) || (floor == 2 && max < a[1] + a[0])) {
		floor = 1;
		max = a[1];
	}

	for (int i = 0; i < 3; i++) time += (i < floor ? (floor - i) * 2 * a[i] : (i - floor) * 2 * a[i]);

	cout << time;

	return 0;
}