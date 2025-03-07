#include <iostream>
using namespace std;

int main()
{
	int n, w, h, amount = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w >> h;
		if (w == 136) amount += 1000;
		else if (w == 142) amount += 5000;
		else if (w == 148) amount += 10000;
		else if (w == 154) amount += 50000;
	}
	cout << amount;

	return 0;
}