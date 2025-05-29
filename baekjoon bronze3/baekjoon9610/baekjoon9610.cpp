#include <iostream>
using namespace std;

int main()
{
	int area[5] = {};
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (x > 0 && y > 0) area[0]++;
		else if (x < 0 && y > 0) area[1]++;
		else if (x < 0 && y < 0) area[2]++;
		else if (x > 0 && y < 0) area[3]++;
		else area[4]++;
	}
	for (int i = 0; i < 4; i++) cout << 'Q' << i + 1 << ": " << area[i] << '\n';
	cout << "AXIS: " << area[4];

	return 0;
}