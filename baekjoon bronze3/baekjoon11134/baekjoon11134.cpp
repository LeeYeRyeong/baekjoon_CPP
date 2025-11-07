#include <iostream>
using namespace std;

int main()
{
	int t, c, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> c;
		cout << (n % c == 0 ? n / c : n / c + 1) << '\n';
	}

	return 0;
}