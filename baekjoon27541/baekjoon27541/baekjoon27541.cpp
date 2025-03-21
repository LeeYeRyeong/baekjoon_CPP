#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;
	if (s[n - 1] == 'G') for (int i = 0; i < n - 1; i++) cout << s[i];
	else cout << s << 'G';

	return 0;
}