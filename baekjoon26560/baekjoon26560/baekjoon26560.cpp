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
		if (s[s.size() - 1] != '.') cout << s << ".\n";
		else cout << s << '\n';
	}

	return 0;
}