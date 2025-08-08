#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, temp = "";
	int n, sum = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		for (int j = 0; j < s.size(); j++) {
			if (j == s.size() - 1) {
				temp += s[j];
				sum += stoi(temp);
			}
			else if (s[j] == ' ') {
				sum += stoi(temp);
				temp = "";
			}
			else temp += s[j];
		}
		cout << sum << '\n';
		sum = 0, temp = "";
	}

	return 0;
}