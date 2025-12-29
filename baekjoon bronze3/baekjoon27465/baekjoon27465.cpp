#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 2 || n == 1) cout << 4;
	else cout << (n % 2 == 0 ? n : n + 1);

	return 0;
}