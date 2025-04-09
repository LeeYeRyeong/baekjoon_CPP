#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'b' || s[i] == 'd' || s[i] == 'D' || s[i] == 'e' || s[i] == 'g' ||
			s[i] == 'O' || s[i] == 'o' || s[i] == 'P' || s[i] == 'p' || s[i] == 'Q' || s[i] == 'q' || s[i] == 'R' ||
			s[i] == '@') count += 1;
		else if (s[i] == 'B') count += 2;
	}
	cout << count;

	return 0;
}