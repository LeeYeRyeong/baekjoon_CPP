#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int  n;
	bool check = true;
	cin >> n >> s;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] != s[i + 1]) {
			check = false;
			break;
		}
	}
	cout << (check ? "Yes" : "No");

	return 0;
}