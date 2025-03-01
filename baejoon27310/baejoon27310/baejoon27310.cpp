#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int underCount = 0, colonCount = 0, level = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '_') underCount++;
		else if (s[i] == ':') colonCount++;
	}
	level = s.size() + colonCount + underCount * 5;
	cout << level;

	return 0;
}