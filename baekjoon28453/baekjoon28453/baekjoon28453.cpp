#include <iostream>
using namespace std;

int main()
{
	int n, level;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> level;
		if (level == 300) cout << "1 ";
		else if (level >= 275) cout << "2 ";
		else if (level >= 250) cout << "3 ";
		else cout << "4 ";
	}

	return 0;
}