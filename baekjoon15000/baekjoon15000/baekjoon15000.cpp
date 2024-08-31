#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) cout << static_cast<char>(toupper(s[i]));

	return 0;
}