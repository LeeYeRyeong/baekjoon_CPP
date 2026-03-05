#include <iostream>
using namespace std;

int main()
{
	int n, firstX, firstY, x, y, preX, preY, length = 0;
	cin >> n >> firstX >> firstY;
	preX = firstX, preY = firstY;
	for (int i = 0; i < n - 1; i++) {
		cin >> x >> y;
		length += (preX > x ? preX - x : x - preX) + (preY > y ? preY - y : y - preY);
		preX = x, preY = y;
	}
	length += (firstX > preX ? firstX - preX : preX - firstX) + (firstY > preY ? firstY - preY : preY - firstY);
	cout << length;

	return 0;
}