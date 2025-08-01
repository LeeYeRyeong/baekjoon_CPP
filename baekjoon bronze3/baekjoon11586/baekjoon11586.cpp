#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[100];
	int n, state;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> state;
	if (state == 1) {
		for (int i = 0; i < n; i++) cout << s[i] << '\n';
	}
	else if (state == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = s[i].size() - 1; j >= 0; j--) cout << s[i][j];
			cout << '\n';
		}
	}
	else if (state == 3) {
		for (int i = n - 1; i >= 0; i--) cout << s[i] << '\n';
	}

	return 0;
}