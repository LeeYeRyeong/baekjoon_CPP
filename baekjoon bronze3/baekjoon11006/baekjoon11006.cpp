#include <iostream>
using namespace std;

int main()
{
	int testCase, n, m, u, t;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> n >> m;
		u = (m * 2 - n);
		t = m - u;
		cout << u << ' ' << t << '\n';
	}

	return 0;
}