#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;
	for (int i = 0; i < n - 1; i++) {
		if (s[i + 1] == 'J') cout << s[i] << '\n';
	}

	return 0;
}