#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'J') cout << 'O';
		else if (s[i] == 'O') cout << 'I';
		else if (s[i] == 'I') cout << 'J';
	}

	return 0;
}