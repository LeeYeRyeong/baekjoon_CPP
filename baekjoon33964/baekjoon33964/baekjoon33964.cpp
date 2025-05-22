#include <iostream>
using namespace std;

int main()
{
	int x, y, sub, min;
	cin >> x >> y;
	min = (x < y ? x : y);
	sub = (x < y ? y - x : x - y);
	for (int i = 0; i < sub; i++) cout << 1;
	for (int i = 0; i < min; i++) cout << 2;

	return 0;
}