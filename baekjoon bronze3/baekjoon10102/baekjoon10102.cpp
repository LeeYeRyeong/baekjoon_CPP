#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, countA = 0, countB = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') countA++;
		else if (s[i] == 'B') countB++;
	}
	cout << (countA == countB ? "Tie" : countA > countB ? "A" : "B");

	return 0;
}