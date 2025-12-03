#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int result = 0, mul = 1;
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> s;
		if (s == "0") break;
		for (int i = s.size(); i > 0; i--) mul *= i;
		for (int i = s.size(); i > 0; i--) {
			result += mul * (static_cast<int>(s[s.size() - i]) - '0');
			mul /= i;
		}
		cout << result << '\n';
		result = 0;
	}

	return 0;
}