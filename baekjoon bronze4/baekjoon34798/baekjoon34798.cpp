#include <iostream>
using namespace std;

int main()
{
	int firstHour, firstMin, secondHour, secondMin;
	char c;
	cin >> firstHour >> c >> firstMin >> secondHour >> c >> secondMin;
	if (firstHour > secondHour) cout << "NO";
	else if (firstHour < secondHour) cout << "YES";
	else if (firstMin < secondMin) cout << "YES";
	else cout << "NO";

	return 0;
}