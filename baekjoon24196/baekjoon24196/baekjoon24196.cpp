#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, result;
	int check;
	cin >> s;
	for (int i = 0; i < s.size(); i += check) {
		result += s[i];
		check = static_cast<int>(s[i] - 64);
		if (i != s.size() - 1 && check + i > s.size() - 1) result += s[s.size() - 1];
	}
	cout << result;

	return 0;
}