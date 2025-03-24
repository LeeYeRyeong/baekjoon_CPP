#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int countA = 0, countB = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') countA++;
		else countB++;
	}
	cout << countA << " : " << countB;

	return 0;
}