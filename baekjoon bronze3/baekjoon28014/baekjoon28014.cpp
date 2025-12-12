#include <iostream>
using namespace std;

int main()
{
	int n, h, max = 0, count = 0;
	cin >> n;
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	for (int i = 0; i < n; i++) {
		cin >> h;
		if (h >= max) count++;
		max = h;
	}
	cout << count;

	return 0;
}