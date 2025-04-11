#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, farX = 0, farY = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'N') farY++;
		else if (s[i] == 'S') farY--;
		else if (s[i] == 'E') farX++;
		else farX--;
	}
	cout << (farX > 0 ? farX : farX * -1) + (farY > 0 ? farY : farY * -1);

	return 0;
}