#include <iostream>
using namespace std;

int main()
{
	int x, n, s, t, max = -1;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		if (max < s && s + t <= x) max = s;
	}
	cout << max;

	return 0;
}