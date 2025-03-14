#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n > 4500) cout << "Case #" << i + 1 << ": Round 1\n";
		else if (n > 1000) cout << "Case #" << i + 1 << ": Round 2\n";
		else if (n > 25)cout << "Case #" << i + 1 << ": Round 3\n";
		else cout << "Case #" << i + 1 << ": World Finals\n";
	}

	return 0;
}