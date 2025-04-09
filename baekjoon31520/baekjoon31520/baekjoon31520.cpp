#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int result;
	bool check = true;
	cin >> s;
	if (s.size() == 1 && s[0] != '1') check = false;
	if (s[0] != '1') check = false;
	else {
		for (int i = 0; i < s.size() - 1; i++) {
			if (static_cast<int>(s[i]) + 1 != static_cast<int>(s[i + 1])) {
				check = false;
				break;
			}
		}
	}
	result = (check ? s.size() : -1);
	cout << result;

	return 0;
}