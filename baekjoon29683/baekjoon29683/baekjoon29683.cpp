#include <iostream>
using namespace std;

int main()
{
	int n, a, cost, count = 0;
	cin >> n >> a;
	for (int i = 0; i < n; i++) {
		cin >> cost;
		count += cost / a;
	}
	cout << count;

	return 0;
}