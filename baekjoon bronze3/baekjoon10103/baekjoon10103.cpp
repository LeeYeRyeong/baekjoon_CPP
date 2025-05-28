#include <iostream>
using namespace std;

int main()
{
	int n, scoreC = 100, scoreS = 100, c, s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> s;
		if (c > s) scoreS -= c;
		else if (c < s) scoreC -= s;
	}
	cout << scoreC << '\n' << scoreS;

	return 0;
}