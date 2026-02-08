#include <iostream>
using namespace std;

int main()
{
	int a, b, value;
	char c;
	while (1) {
		cin >> a >> c >> b;
		if (a == 0 && b == 0) break;
		value = (c == 'W' ? a - b : a + b);
		if (value < -200) cout << "Not allowed\n";
		else cout << value << '\n';
	}

	return 0;
}