#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	bool check = false;
	getline(cin, s);
	for (int i = 0; i < s.size() - 1; i++) {
		if ((s[i] == 'd' || s[i] == 'D') && s[i + 1] == '2') check = true;
	}
	cout << (check ? "D2" : "unrated");

	return 0;
}