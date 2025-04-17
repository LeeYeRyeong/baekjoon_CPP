#include <iostream>
using namespace std;

int main()
{
	int w, h, a, b, n, count = -1;
	cin >> w >> h >> n >> a >> b;
	if (w >= a && h >= b) count = (n % ((w / a) * (h / b)) == 0 ? n / ((w / a) * (h / b)) : n / ((w / a) * (h / b)) + 1);
	cout << count;

	return 0;
}