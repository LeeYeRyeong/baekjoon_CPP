#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, major;
	int n, year, resultYear = 2000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> year;
		if (year > resultYear) {
			major = name;
			resultYear = year;
		}
	}
	cout << major;

	return 0;
}