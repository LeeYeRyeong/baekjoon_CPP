#include <iostream>
using namespace std;

int main()
{
	int n, originCost, addCost, kwh;
	cin >> originCost >> addCost >> n;
	for (int i = 0; i < n; i++) {
		cin >> kwh;
		cout << kwh << ' ' << (kwh > 1000 ? (1000 * originCost) + (kwh - 1000) * addCost : kwh * originCost) << '\n';
	}

	return 0;
}