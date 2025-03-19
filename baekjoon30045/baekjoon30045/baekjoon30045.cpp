#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size() - 1; j++) {
			if ((s[j] == '0' && s[j + 1] == '1') || s[j] == 'O' && s[j + 1] == 'I') {
				count++;
				break;
			}
		}
	}
	cout << count;

	return 0;
}