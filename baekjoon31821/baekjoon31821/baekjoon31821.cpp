#include <iostream>
using namespace std;

int main()
{
	int price[10] = {};
	int n, m, num, cost = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> price[i];
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cost += price[num - 1];
	}
	cout << cost;

	return 0;
}