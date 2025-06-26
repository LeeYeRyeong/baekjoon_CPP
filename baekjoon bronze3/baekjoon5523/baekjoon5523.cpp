#include <iostream>
using namespace std;

int main()
{
	int n, aScore, bScore, a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> aScore >> bScore;
		if (aScore > bScore) a++;
		else if (aScore < bScore) b++;
	}
	cout << a << ' ' << b;

	return 0;
}