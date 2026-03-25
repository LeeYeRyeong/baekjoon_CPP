#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, line, maxLine = 0, max = 0, blackLine = 0;
	cin >> n >> line;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '1') blackLine++;
		}
		for (int j = 0; j < s.size() - 1; j++) {
			if (s[j] == '1' && s[j + 1] == '1') blackLine--;
		}
		if (blackLine > maxLine) {
			maxLine = blackLine;
			max = 1;

		}
		else if (blackLine == maxLine) max++;
		//cout << "BlackLine : " << blackLine << "\nMaxLine : " << maxLine << "\nMax : " << max << '\n';
		blackLine = 0;
	}
	cout << maxLine << ' ' << max;

	return 0;
}