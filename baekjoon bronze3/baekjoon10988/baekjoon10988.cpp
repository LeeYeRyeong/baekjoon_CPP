#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	bool check = true;
	cin >> s;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			check = false;
			break;
		}
	}
	cout << check;
}