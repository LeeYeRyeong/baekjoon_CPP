#include <iostream>
using namespace std;

int main()
{
	int d, e, q;
	char c;
	cin >> d >> e;
	for (int i = 0; i < e; i++) {
		cin >> c >> q;
		d += (c == '+' ? q : -q);
	}
	cout << d;

	return 0;
}