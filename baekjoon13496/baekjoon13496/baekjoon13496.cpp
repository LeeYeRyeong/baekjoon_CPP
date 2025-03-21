#include <iostream>
using namespace std;

int main()
{
	int t, num, speed, day, distance, value, count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num >> speed >> day;
		for (int j = 0; j < num; j++) {
			cin >> distance >> value;
			if (speed * day >= distance) count += value;
		}
		cout << "Data Set " << i + 1 << ":\n" << count << "\n\n";
		count = 0;
	}

	return 0;
}