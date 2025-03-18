#include <iostream>
using namespace std;

int main()
{
	int n, date = 0;
	cin >> n;
	date = (n - 1) * 7 + 8;
	cout << 2024 + (date % 12 == 0 ? date / 12 - 1 : date / 12) << ' ' << (date % 12 == 0 ? 12 : date % 12);

	return 0;
}