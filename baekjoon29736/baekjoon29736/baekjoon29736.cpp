#include <iostream>
using namespace std;

int main()
{
	int a, b, k, x, count = 0;
	cin >> a >> b >> k >> x;

	for (int i = k - x; i <= k + x; i++) {
		if (i<a || i>b) continue;
		count++;
	}

	if (count > 0) cout << count << endl;
	else cout << "IMPOSSIBLE" << endl;

	return 0;
}