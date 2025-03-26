#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, h = 0;
	for (int i = 0; i < 4; i++) {
		cin >> s >> n;
		if (s == "Es") h += n * 21;
		else h += n * 17;
	}
	cout << h;

	return 0;
}