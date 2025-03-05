#include <iostream>
using namespace std;

int main()
{
	int x, l, r, less = 100000, min;
	cin >> x >> l >> r;
	for (int i = l; i <= r; i++) {
		if (less > (x - i < 0 ? i - x : x - i)) {
			less = (x - i < 0 ? i - x : x - i);
			min = i;
		}
	}
	cout << min;

	return 0;
}