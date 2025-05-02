#include <iostream>
using namespace std;

int main()
{
	int n, m, checkA = 0;
	char c;
	bool check = true;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;
			if (c == 'A') checkA++;
		}
		if (checkA != 1) check = false;
		checkA = 0;
	}
	cout << (check ? "Yes" : "No");

	return 0;
}