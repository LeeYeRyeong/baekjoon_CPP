#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int lion = 0, tiger = 0;
	for (int i = 0; i < 9; i++) {
		cin >> s;
		if (s == "Lion") lion++;
		else if (s == "Tiger") tiger++;
	}
	cout << (lion > tiger ? "Lion" : "Tiger");

	return 0;
}