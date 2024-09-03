#include <iostream>
using namespace std;

int main()
{
	int t, s;
	cin >> t >> s;
	if (s == 0 && (t > 11 && t <= 16)) cout << 320 << endl;
	else cout << 280 << endl;

	return 0;
}