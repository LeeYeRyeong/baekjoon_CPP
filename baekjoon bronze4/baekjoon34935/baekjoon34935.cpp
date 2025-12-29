#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pre, s;
	int n;
	bool check = true;
	cin >> n >> s;
	pre = s;
	for (int i = 0; i < n - 1; i++) {
		cin >> s;
		if (s == pre) check = false;
		pre = s;
	}
	cout << check;

	return 0;
}