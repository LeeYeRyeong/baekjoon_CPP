#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, resultName;
	int count, resultCount = 0;
	for (int i = 0; i < 7; i++) {
		cin >> name >> count;
		if (count > resultCount) {
			resultCount = count;
			resultName = name;
		}
	}
	cout << resultName;

	return 0;
}