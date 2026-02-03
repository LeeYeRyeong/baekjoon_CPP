#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, vowel = 0, nVowel = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U') vowel++;
			else if (s[j] != ' ') nVowel++;
		}
		cout << nVowel << ' ' << vowel << '\n';
		nVowel = 0, vowel = 0;
	}

	return 0;
}