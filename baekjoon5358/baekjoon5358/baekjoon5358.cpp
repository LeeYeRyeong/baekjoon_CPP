#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (1) {
		string s = "";
		getline(cin, s);
		if (s == "") break;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'i') cout << 'e';
			else if (s[i] == 'e') cout << 'i';
			else if (s[i] == 'I') cout << 'E';
			else if (s[i] == 'E') cout << 'I';
			else cout << s[i];
		}
		cout << endl;
	}
}