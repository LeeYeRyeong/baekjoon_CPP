#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, even = 0, odd = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (static_cast<int>(s[i]) % 2 == 0) even++;
		else odd++;
	}
	cout << (even == odd ? -1 : (even > odd ? 0 : 1));

	return 0;
}