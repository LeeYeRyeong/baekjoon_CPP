#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int mobis[5] = { 0,0,0,0,0 };
	bool result = true;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'M')mobis[0] = 1;
		else if (s[i] == 'O')mobis[1] = 1;
		else if (s[i] == 'B')mobis[2] = 1;
		else if (s[i] == 'I')mobis[3] = 1;
		else if (s[i] == 'S')mobis[4] = 1;
	}
	for (int i = 0; i < 5; i++) {
		if (mobis[i] == 0) {
			result = false;
			break;
		}
	}
	cout << (result ? "YES" : "NO");

	return 0;
}