#include <iostream>
using namespace std;

int main()
{
	int h, i, a, r, c, total = 0;
	cin >> h >> i >> a >> r >> c;
	total = (h * i) - (a * r * c);
	cout << total << endl;

	return 0;
}