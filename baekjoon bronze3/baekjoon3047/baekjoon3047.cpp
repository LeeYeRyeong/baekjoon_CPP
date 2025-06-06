#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int order[3] = {};
	int a, b, c, temp;
	cin >> a >> b >> c >> s;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	for (int i = 0; i < 3; i++) {
		if (s[i] == 'A') order[i] = 1;
		else if (s[i] == 'B') order[i] = 2;
		else if (s[i] == 'C') order[i] = 3;
	}
	for (int i = 0; i < 3; i++) {
		if (order[i] == 1) cout << a << ' ';
		else if (order[i] == 2) cout << b << ' ';
		else if (order[i] == 3) cout << c << ' ';
	}

	return 0;
}