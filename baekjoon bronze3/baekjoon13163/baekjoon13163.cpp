#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, result = "";
	int n, index;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		for (int j = 0; s[j] != ' '; j++) index = j + 2;
		for (int j = index; j < s.size(); j++) {
			if (s[j] != ' ') result += s[j];
		}
		cout << "god" << result << '\n';
		result = "";
	}

	return 0;
}