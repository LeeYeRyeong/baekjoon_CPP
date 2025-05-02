#include <iostream>
using namespace std;

int main()
{
	int check[1000];
	int n, x, y, increase = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> check[i];
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (y > x && check[i] == 1) increase += y - x;
	}
	cout << increase;

	return 0;
}