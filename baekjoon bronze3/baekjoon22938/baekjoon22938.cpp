#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double distance;
	int x1, y1, x2, y2, r1, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	distance = sqrt((x1 > x2 ? pow(x1 - x2, 2) : pow(x2 - x1, 2)) + (y1 > y2 ? pow(y1 - y2, 2) : pow(y2 - y1, 2)));
	cout << (distance < r1 + r2 ? "YES" : "NO");

	return 0;
}