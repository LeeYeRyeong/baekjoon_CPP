#include <iostream>
using namespace std;

int main()
{
	int people[4] = {};
	int x, y, r, result = 0;
	for (int i = 0; i < 4; i++) cin >> people[i];
	cin >> x >> y >> r;
	for (int i = 0; i < 4; i++) if (people[i] == x) result = i + 1;
	cout << result;

	return 0;
}