#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, count = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'o') count += 1;
		else count += 2;
	}
	cout << count;

	return 0;
}