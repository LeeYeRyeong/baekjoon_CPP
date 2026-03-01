#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, count = 0;
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cin >> n >> s;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) count++;
	}
	cout << count;

	return 0;
}