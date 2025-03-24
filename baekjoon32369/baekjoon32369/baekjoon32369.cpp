#include <iostream>
using namespace std;

int main()
{
	int n, a, b, badOnion = 1, goodOnion = 1;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) {
		goodOnion += a;
		badOnion += b;
		if (goodOnion < badOnion) {
			int temp = goodOnion;
			goodOnion = badOnion;
			badOnion = temp;
		}
		else if (goodOnion == badOnion) badOnion--;
	}
	cout << goodOnion << ' ' << badOnion;

	return 0;
}