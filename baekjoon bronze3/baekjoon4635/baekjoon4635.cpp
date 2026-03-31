#include <iostream>
using namespace std;

int main()
{
	int n, speed, time, preTime = 0, distance = 0;
	while (1) {
		cin >> n;
		if (n == -1) break;
		for (int i = 0; i < n; i++) {
			cin >> speed >> time;
			distance += (time - preTime) * speed;
			preTime = time;
		}
		cout << distance << " miles\n";
		distance = 0, preTime = 0;
	}

	return 0;
}