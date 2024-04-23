#include <iostream>
using namespace std;

int main()
{
	string s = "WelcometoSMUPC";
	int n;
	cin >> n;
	cout << s[n % 14 - 1];

	return 0;
}