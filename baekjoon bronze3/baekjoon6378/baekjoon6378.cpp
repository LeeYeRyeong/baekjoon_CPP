#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int sum = 0;
	while (1) {
		cin >> s;
		if (s == "0") break;
		while (s.size() > 1) {
			for (int i = 0; i < s.size(); i++) {
				sum += s[i] - 48;
			}
			s = to_string(sum);
			sum = 0;
		}
		cout << s << '\n';
	}

	return 0;
}