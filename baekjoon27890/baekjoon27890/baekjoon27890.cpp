#include <iostream>
using namespace std;

int main()
{
	int h, n;
	cin >> h >> n;
	for (int i = 0; i < n; i++) h = (h % 2 == 0 ? h / 2 ^ 6 : 2 * h ^ 6);
	cout << h;

	return 0;
}