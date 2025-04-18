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
		if (s[0] == 'C') count++;
	}
	cout << count;

	return 0;
}