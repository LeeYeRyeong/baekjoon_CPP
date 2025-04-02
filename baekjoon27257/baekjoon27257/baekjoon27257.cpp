#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int beauty = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') beauty++;
	}
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == '0') beauty--;
		else break;
	}
	cout << beauty;

	return 0;
}