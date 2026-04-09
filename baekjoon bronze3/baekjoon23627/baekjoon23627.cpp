#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, driip = "driip";
	bool cute = true;
	cin >> s;
	if (s.size() < 5) cute = false;
	else {
		for (int i = s.size() - 5; i < s.size(); i++) {
			if (s[i] != driip[i - (s.size() - 5)]) cute = false;
		}
	}
	cout << (cute ? "cute" : "not cute");

	return 0;
}