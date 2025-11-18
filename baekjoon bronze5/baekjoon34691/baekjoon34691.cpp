#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (1) {
		cin >> s;
		if (s == "end") break;
		if (s == "animal") cout << "Panthera tigris\n";
		else if (s == "tree") cout << "Pinus densiflora\n";
		else if (s == "flower") cout << "Forsythia koreana\n";
	}

	return 0;
}