#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	while (s != "#") {
		getline(cin, s);
		if (s == "#") break;
		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') count++;
		}
		cout << count << endl;
		count = 0;
	}

	return 0;
}