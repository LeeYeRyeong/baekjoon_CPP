#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'I') cout << 'i';
		else cout << 'L';
	}

	return 0;
}