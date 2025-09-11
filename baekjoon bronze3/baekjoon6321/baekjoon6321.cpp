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
		cout << "String #" << i + 1 << '\n';
		for (int j = 0; j < s.size(); j++) {
			cout << (s[j] == 'Z' ? 'A' : static_cast<char>(s[j] + 1));
		}
		cout << "\n\n";
	}

	return 0;
}