#include <iostream>
using namespace std;

int main()
{
	int n = 1, c;
	cin >> c;
	while (c != 1) {
		c = (c % 2 == 0 ? c / 2 : 3 * c + 1);
		n++;
	}
	cout << n;

	return 0;
}