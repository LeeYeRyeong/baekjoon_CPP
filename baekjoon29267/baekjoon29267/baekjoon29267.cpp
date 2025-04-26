#include <iostream>
#include <string>
using namespace std;

int main()
{
	string action;
	int n, k, currentCount = 0, saveCount = 0, resultCount = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> action;
		if (action == "save") saveCount = currentCount;
		else if (action == "shoot") currentCount--;
		else if (action == "ammo") currentCount += k;
		resultCount = (action == "load" ? saveCount : currentCount);
		cout << resultCount << '\n';
		currentCount = resultCount;
	}

	return 0;
}