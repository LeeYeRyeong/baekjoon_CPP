#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		m += 60;
		h = (h > 0 ? h - 1 : 23);
	}
	cout << h << ' ' << m - 45;

	return 0;
}