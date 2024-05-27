#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, sum = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) sum += static_cast<int>(s[i] - 48);
	cout << sum << endl;

	return 0;
}