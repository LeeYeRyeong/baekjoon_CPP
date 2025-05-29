#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int width = 0;
	while (1) {
		cin >> s;
		if (s == "0") break;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0') width += 4;
			else if (s[i] == '1') width += 2;
			else width += 3;
		}
		cout << width + s.size() + 1 << '\n';
		width = 0;
	}

	return 0;
}