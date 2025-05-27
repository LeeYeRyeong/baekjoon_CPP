#include <iostream>
using namespace std;

int main()
{
	int n, time, yCost = 0, mCost = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> time;
		yCost += (time / 30 + 1) * 10, mCost += (time / 60 + 1) * 15;
	}
	if (yCost == mCost) cout << "Y M " << yCost;
	else if (yCost > mCost) cout << "M " << mCost;
	else cout << "Y " << yCost;

	return 0;
}