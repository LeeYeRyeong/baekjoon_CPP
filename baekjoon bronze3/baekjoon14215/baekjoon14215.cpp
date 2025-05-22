#include <iostream>
using namespace std;

int main()
{
	int a, b, c, dis = 0, max = 0;
	cin >> a >> b >> c;
	dis = a + b + c;
	if (max < a) max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout << (max < dis - max ? dis : 2 * (dis - max) - 1);

	return 0;
}