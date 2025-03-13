#include <iostream>
using namespace std;

int main()
{
	int n, max = -1, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> num;
			if (max < num) max = num;
		}
		cout << "Case #" << i + 1 << ": " << max << '\n';
		max = -1;
	}

	return 0;
}