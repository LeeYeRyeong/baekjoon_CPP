#include <iostream>
#include <string>
using namespace std;

int main()
{
	string code, recode;
	int n, count = 0;
	cin >> recode >> n;
	for (int i = 0; i < n; i++) {
		cin >> code;
		if (recode.substr(0, 5) == code.substr(0, 5)) count++;
	}
	cout << count;

	return 0;
}