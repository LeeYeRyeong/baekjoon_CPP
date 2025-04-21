#include <iostream>
using namespace std;

int main()
{
	int people[1000] = {};
	int n, current = 0, max = 0;
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) cin >> people[i];
		for (int i = 0; i < n; i++) {
			current += people[i];
			if (i > 2) current -= people[i - 3];
			if (current > max) max = current;
		}
		cout << max << '\n';
		max = 0;
		current = 0;
	}

	return 0;
}