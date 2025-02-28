#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		sum += n;
	}
	if (sum % 4 == 0) cout << 'N';
	else if (sum % 4 == 1) cout << 'E';
	else if (sum % 4 == 2) cout << 'S';
	else if (sum % 4 == 3) cout << 'W';

	return 0;
}