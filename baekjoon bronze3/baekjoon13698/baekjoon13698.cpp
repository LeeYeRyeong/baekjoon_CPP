#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int smallIndex = 0, bigIndex = 3;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') {
			if (smallIndex == 0) smallIndex = 1;
			else if (smallIndex == 1) smallIndex = 0;
			if (bigIndex == 0) bigIndex = 1;
			else if (bigIndex == 1) bigIndex = 0;
		}
		else if (s[i] == 'B') {
			if (smallIndex == 0) smallIndex = 2;
			else if (smallIndex == 2) smallIndex = 0;
			if (bigIndex == 0) bigIndex = 2;
			else if (bigIndex == 2) bigIndex = 0;
		}
		else if (s[i] == 'C') {
			if (smallIndex == 0) smallIndex = 3;
			else if (smallIndex == 3) smallIndex = 0;
			if (bigIndex == 0) bigIndex = 3;
			else if (bigIndex == 3) bigIndex = 0;
		}
		else if (s[i] == 'D') {
			if (smallIndex == 1) smallIndex = 2;
			else if (smallIndex == 2) smallIndex = 1;
			if (bigIndex == 1) bigIndex = 2;
			else if (bigIndex == 2) bigIndex = 1;
		}
		else if (s[i] == 'E') {
			if (smallIndex == 1) smallIndex = 3;
			else if (smallIndex == 3) smallIndex = 1;
			if (bigIndex == 1) bigIndex = 3;
			else if (bigIndex == 3) bigIndex = 1;
		}
		else if (s[i] == 'F') {
			if (smallIndex == 2) smallIndex = 3;
			else if (smallIndex == 3) smallIndex = 2;
			if (bigIndex == 2) bigIndex = 3;
			else if (bigIndex == 3) bigIndex = 2;
		}
	}
	cout << smallIndex + 1 << '\n' << bigIndex + 1;

	return 0;
}