#include <iostream>
using namespace std;

int main()
{
	int count = 0, result = -1;
	char c;
	for (int i = 0; i < 6; i++) {
		cin >> c;
		if (c == 'W') count++;
	}
	if (count >= 5) result = 1;
	else if (count >= 3) result = 2;
	else if (count >= 1) result = 3;
	cout << result;

	return 0;
}