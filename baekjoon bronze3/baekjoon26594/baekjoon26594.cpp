#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 1;
	cin >> s;
	for (int i = 1; s[i] == s[0]; i++) {
		if (s[i] == s[0]) count++;
	}
	cout << count;

	return 0;
}