#include <iostream>
using namespace std;

int main()
{
	int year, month, date;
	char dash;
	cin >> year >> dash >> month >> dash >> date;
	if (month > 9 || (month == 9 && date > 16)) cout << "TOO LATE";
	else cout << "GOOD";

	return 0;
}