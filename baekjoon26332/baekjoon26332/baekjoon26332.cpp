#include <iostream>
using namespace std;

int main()
{
	int n, count, prize;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> count >> prize;
		cout << count << ' ' << prize << '\n' << count * prize - (count - 1) * 2 << '\n';
	}
	return 0;
}