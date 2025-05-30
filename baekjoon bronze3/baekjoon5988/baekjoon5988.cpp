#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if ((static_cast<int>(s[s.size() - 1]) - 48) % 2 == 0) cout << "even\n";
		else cout << "odd\n";
	}

	return 0;
}