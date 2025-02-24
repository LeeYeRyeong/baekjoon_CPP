#include <iostream>
using namespace std;

int main()
{
	int need[3] = {}, prep[3] = {};
	int count = 0;
	cin >> prep[0] >> prep[1] >> prep[2] >> need[0] >> need[1] >> need[2];
	for (int i = 0; i < 3; i++) {
		if (need[i] > prep[i]) count += need[i] - prep[i];
	}
	cout << count;

	return 0;
}