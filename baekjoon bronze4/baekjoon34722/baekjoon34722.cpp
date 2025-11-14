#include <iostream>
using namespace std;

int main()
{
	int n, b, c, a, icpc, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> c >> a >> icpc;
		if (b >= 1000 || c >= 1600 || a >= 1500 || (icpc >= 1 && icpc <= 30)) count++;
	}
	cout << count;

	return 0;
}