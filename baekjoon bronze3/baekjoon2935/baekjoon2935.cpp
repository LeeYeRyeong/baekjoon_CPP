#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	char c;
	cin >> s1 >> c >> s2;
	if (c == '*') {
		cout << 1;
		for (int i = 0; i < s1.size() - 1 + s2.size() - 1; i++) cout << 0;
	}
	else {
		if (s1.size() == s2.size()) {
			cout << 2;
			for (int i = 0; i < s1.size() - 1; i++) cout << 0;
		}
		else {
			cout << 1;
			for (int i = 0; i < (s1.size() > s2.size() ? s1.size() - 1 : s2.size() - 1); i++) {
				if (i == (s1.size() > s2.size() ? s1.size() - s2.size() - 1 : s2.size() - s1.size() - 1)) cout << 1;
				else cout << 0;
			}
		}
	}

	return 0;
}