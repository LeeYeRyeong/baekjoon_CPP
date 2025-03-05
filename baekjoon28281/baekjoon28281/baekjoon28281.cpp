#include <iostream>
using namespace std;

int main()
{
	int price[100000] = {};
	int n, x, cost = 2000;
	cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> price[i];
	for (int i = 0; i < n - 1; i++) {
		if (cost > price[i] + price[i + 1]) cost = price[i] + price[i + 1];
	}

	cout << cost * x;

	return 0;
}