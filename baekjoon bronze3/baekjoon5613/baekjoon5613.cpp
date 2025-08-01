#include <iostream>
using namespace std;

int main()
{
	int result = 0, n;
	char c;
	cin >> n;
	result = n;
	while (1) {
		cin >> c;
		if (c == '=') break;
		else {
			cin >> n;
			if (c == '+') result += n;
			else if (c == '-') result -= n;
			else if (c == '*') result *= n;
			else if (c == '/') result /= n;
		}
	}
	cout << result;

	return 0;
}