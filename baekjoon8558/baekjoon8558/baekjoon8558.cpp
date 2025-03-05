#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n > 4) cout << 0;
	else if (n == 4) cout << 4;
	else if (n == 3) cout << 6;
	else if (n == 2) cout << 2;
	else cout << 1;

	return 0;
}