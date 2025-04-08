#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2, result;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++) {
		result += (static_cast<int>(s1[i]) > static_cast<int>(s2[i]) ? s1[i] : s2[i]);
	}
	cout << result;

	return 0;
}