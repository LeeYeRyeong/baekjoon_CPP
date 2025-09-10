#include <iostream>
using namespace std;

int main()
{
	int n, hardIndex, easyIndex, min = 1001, max = 0, level;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> level;
		if (max < level) {
			max = level;
			hardIndex = i;
		}
		if (min > level) {
			min = level;
			easyIndex = i;
		}
	}
	cout << (easyIndex == 0 ? "ez" : hardIndex == 0 ? "hard" : "?");

	return 0;
}
