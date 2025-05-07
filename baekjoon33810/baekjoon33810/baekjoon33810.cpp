#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, message = "SciComLove";
	int count = 0;
	cin >> s;
	for (int i = 0; i < message.size(); i++) {
		if (message[i] != s[i])count++;
	}
	cout << count;

	return 0;
}