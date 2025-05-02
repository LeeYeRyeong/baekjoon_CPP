#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, uapcStr = "UAPC";
	int uapc[4] = {};
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'U') uapc[0] = 1;
		else if (s[i] == 'A') uapc[1] = 1;
		else if (s[i] == 'P') uapc[2] = 1;
		else if (s[i] == 'C') uapc[3] = 1;
	}
	for (int i = 0; i < 4; i++)
		if (uapc[i] == 0) cout << uapcStr[i];

	return 0;
}