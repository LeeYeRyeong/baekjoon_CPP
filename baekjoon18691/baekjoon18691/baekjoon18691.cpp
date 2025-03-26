#include <iostream>
using namespace std;

int main()
{
	int n, groupNum, currentCount, needCount;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> groupNum >> currentCount >> needCount;
		if (currentCount >= needCount) cout << 0 << '\n';
		else if (groupNum == 1) cout << needCount - currentCount << '\n';
		else if (groupNum == 2) cout << 3 * (needCount - currentCount) << '\n';
		else if (groupNum == 3) cout << 5 * (needCount - currentCount) << '\n';
	}

	return 0;
}