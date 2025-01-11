#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if (s.size() == 4) cout << 20;
	else if (s.size() == 3 && s[0] == '1' && s[1] == '0') cout << 10 + static_cast<int>(s[2]) - '0';
	else if (s.size() == 3) cout << 10 + static_cast<int>(s[0]) - '0';
	else cout << (static_cast<int>(s[0]) - '0') + static_cast<int>(s[1]) - '0';

	return 0;
}