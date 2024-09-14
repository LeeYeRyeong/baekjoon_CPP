#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	string s;
	cin >> size >> s;
	for (int i = 5; i > 0; i--) cout << static_cast<char>(s[size - i]);

	return 0;
}