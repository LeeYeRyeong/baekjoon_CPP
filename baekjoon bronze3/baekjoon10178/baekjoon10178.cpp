#include <iostream>
using namespace std;

int main()
{
	int n, c, v, m, d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> v;
		m = c / v, d = c % v;
		cout << "You get " << m << " piece(s) and your dad gets " << d << " piece(s).\n";
	}

	return 0;
}