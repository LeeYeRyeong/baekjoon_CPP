#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	bool check = true;
	cin >> n >> s;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == '1' && s[i + 1] != '2') check = false;
		else if (s[i] == '2' && s[i + 1] != '1') check = false;
	}
	cout << (check ? "Yes" : "No");

	return 0;
}