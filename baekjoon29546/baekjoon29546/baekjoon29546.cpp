#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pic[1000] = {};
	int n, m, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> pic[i];
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		for (int j = a - 1; j < b; j++) cout << pic[j] << '\n';
	}

	return 0;
}