#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char c;
	cin >> s;
	cin.tie(0);
	while (cin >> c) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == c) s[i] += 32;
		}
	}
	cout << s;

	return 0;
}