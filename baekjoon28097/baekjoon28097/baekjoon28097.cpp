#include <iostream>
using namespace std;

int main()
{
	int n, time, studyTime = -8;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> time;
		studyTime += time + 8;
	}
	cout << studyTime / 24 << " " << studyTime % 24;

	return 0;
}