#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c;
	cout << "? A " << a << '\n';
	while (1) {
		cin >> c;
		if (c == 1) break;
		cout << "? A " << ++a << '\n';
	}
	cout << "? B " << b << '\n';
	while (1) {
		cin >> c;
		if (c == 1) break;
		cout << "? B " << ++b << '\n';
	}
	cout << "! " << a + b;

	return 0;
}