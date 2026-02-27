#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, bigData = 0, security = 0;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 's') security++;
		else if (s[i] == 'b') bigData++;
	}
	if (bigData == security) cout << "bigdata? security!";
	else if (bigData > security) cout << "bigdata?";
	else cout << "security!";

	return 0;
}