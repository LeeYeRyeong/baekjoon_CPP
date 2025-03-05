#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	cin >> s;
	if (s.size() >= 4) {
		for (int i = 0; i <= s.size() - 4; i++) {
			if (s[i] == 'D' && s[i + 1] == 'K' && s[i + 2] == 'S' && s[i + 3] == 'H') count++;
		}
	}
	cout << count;

	return 0;
}