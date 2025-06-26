#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = to_string(i);
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '3' || s[j] == '6' || s[j] == '9') count++;
		}
	}
	cout << count;

	return 0;
}