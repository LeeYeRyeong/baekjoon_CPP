#include <iostream>
using namespace std;

int main()
{
	int pointD = 0, pointP = 0, n;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (pointD - pointP == 2 || pointP - pointD == 2) continue;
		if (c == 'D') pointD++;
		else pointP++;
	}
	cout << pointD << ":" << pointP;

	return 0;
}