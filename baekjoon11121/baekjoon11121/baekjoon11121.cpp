#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input, output;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> input >> output;
		cout << (input == output ? "OK\n" : "ERROR\n");
	}

	return 0;
}