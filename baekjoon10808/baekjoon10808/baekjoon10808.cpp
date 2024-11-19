#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count[26] = {};
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) count[static_cast<int>(s[i] - 'a')]++;
	for (int i = 0; i < 26; i++) cout << count[i] << " ";

	return 0;
}