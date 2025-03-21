#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int scoreA = 0, scoreB = 0;
	cin >> s;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i * 2] == 'A') scoreA += s[i * 2 + 1];
		else scoreB += s[i * 2 + 1];
	}
	cout << (scoreA > scoreB ? 'A' : 'B');

	return 0;
}