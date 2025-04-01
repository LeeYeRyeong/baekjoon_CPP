#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0, countY = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
		else if (s[i] == 'y') countY++;
	}
	cout << count << ' ' << count + countY;

	return 0;
}