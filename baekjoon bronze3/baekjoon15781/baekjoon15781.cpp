#include <iostream>
using namespace std;

int main()
{
	int n, m, h, a, maxH = 0, maxA = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> h;
		maxH = (maxH < h ? h : maxH);
	}
	for (int i = 0; i < m; i++) {
		cin >> a;
		maxA = (maxA < a ? a : maxA);
	}
	cout << maxH + maxA;

	return 0;
}