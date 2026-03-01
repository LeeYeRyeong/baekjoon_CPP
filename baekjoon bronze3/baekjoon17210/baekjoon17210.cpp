#include <iostream>
using namespace std;

int main()
{
	int n, first;
	cin >> n >> first;
	if (n >= 6) cout << "Love is open door";
	else {
		if (first == 0) {
			for (int i = 0; i < n - 1; i++) {
				if (i % 2 == 0) cout << 1 << '\n';
				else cout << 0 << '\n';
			}
		}
		else {
			for (int i = 0; i < n - 1; i++) {
				if (i % 2 == 0) cout << 0 << '\n';
				else cout << 1 << '\n';
			}
		}
	}

	return 0;
}