#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n == 0 && m == 0) cout << "Not a moose";
	else if ((n + m) % 2 == 0 && n == m) cout << "Even " << (n > m ? n * 2 : m * 2);
	else cout << "Odd " << (n > m ? n * 2 : m * 2);

	return 0;
}