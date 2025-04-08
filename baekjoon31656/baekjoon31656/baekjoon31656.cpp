#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, result;
	getline(cin, s);
	result += s[0];
	for (int i = 1; i < s.size(); i++) {
		if (result[result.size() - 1] != s[i]) result += s[i];
	}
	cout << result;

	return 0;
}