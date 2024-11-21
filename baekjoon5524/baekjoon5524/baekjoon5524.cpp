#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) cout << static_cast<char>(tolower(s[j]));
		cout << endl;
	}

	return 0;
}