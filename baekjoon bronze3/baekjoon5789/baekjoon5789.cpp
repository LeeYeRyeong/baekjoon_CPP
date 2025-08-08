#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s[s.size() / 2] == s[s.size() / 2 - 1]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}

	return 0;
}