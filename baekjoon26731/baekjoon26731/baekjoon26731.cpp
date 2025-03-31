#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int check[26] = {};
	char result;
	cin >> s;
	for (int i = 0; i < s.size(); i++) check[s[i] - 65]++;
	for (int i = 0; i < 26; i++) {
		if (check[i] == 0) result = static_cast<char>(i + 65);
	}
	cout << result;

	return 0;
}