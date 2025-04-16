#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, countAmber = 0, countBrass = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'a') countAmber++;
			else countBrass++;
		}
		cout << (countAmber < countBrass ? countAmber : countBrass) << '\n';
		countAmber = 0;
		countBrass = 0;
	}

	return 0;
}