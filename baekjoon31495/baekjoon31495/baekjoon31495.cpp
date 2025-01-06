#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	if (s.size() > 2 && s[0] == '\"' && s[s.size() - 1] == '\"') for (int i = 1; i < s.size() - 1; i++) cout << s[i];
	else cout << "CE";

	return 0;
}