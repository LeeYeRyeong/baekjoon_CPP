#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 3 == 0) cout << "S";
	else if (n % 3 == 1) cout << "U";
	else cout << "O";

	return 0;
}