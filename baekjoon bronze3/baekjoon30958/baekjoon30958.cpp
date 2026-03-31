#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int max[26] = {};
	int n, count = 0;
	char c;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') max[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (max[i] > count) count = max[i];
	}
	cout << count;

	return 0;
}