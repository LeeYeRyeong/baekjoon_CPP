#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, countS = 0, countT = 0, index;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			if (s[j] == 's')countS++;
			else if (s[j] == 't') countT++;
		}
		if (countS == countT) {
			index = i;
			break;
		}
		countS = 0, countT = 0;
	}
	for (int i = index; i < s.size(); i++) cout << s[i];

	return 0;
}