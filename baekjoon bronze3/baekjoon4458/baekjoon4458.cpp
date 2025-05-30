#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		if (islower(s[0])) s[0] -= 32;
		cout << s << '\n';
	}

	return 0;
}