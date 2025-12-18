#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	while (1) {
		getline(cin, s);
		if (s.size() == 0) break;
		count++;
	}
	cout << count;

	return 0;
}