#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int check[26] = {};
	int value = 0, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) check[s[j] - 65] = 1;
		for (int j = 0; j < 26; j++) value += (check[j] == 0 ? j + 65 : 0);
		cout << value << '\n';
		value = 0;
		for (int j = 0; j < 26; j++) check[j] = 0;
	}

	return 0;
}