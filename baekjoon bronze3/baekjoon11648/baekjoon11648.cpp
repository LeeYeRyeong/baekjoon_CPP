#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0, num = 1;
	cin >> s;
	while (s.size() > 1) {
		count++;
		for (int i = 0; i < s.size(); i++) num *= s[i] - '0';
		s = to_string(num);
		num = 1;
	}
	cout << count;

	return 0;
}