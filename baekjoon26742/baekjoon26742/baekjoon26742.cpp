#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int white = 0, black = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'B') black++;
		else if (s[i] == 'C') white++;
	}
	cout << (white / 2) + (black / 2);

	return 0;
}