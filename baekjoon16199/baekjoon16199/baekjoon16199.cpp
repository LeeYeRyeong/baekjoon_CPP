#include <iostream>
using namespace std;

int main()
{
	int birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay, countAge = 0, yearAge = 0, fullAge = 0;
	cin >> birthYear >> birthMonth >> birthDay >> currentYear >> currentMonth >> currentDay;
	if (currentYear > birthYear) {
		if (currentMonth > birthMonth || (currentMonth == birthMonth && currentDay >= birthDay)) fullAge = currentYear - birthYear;
		else fullAge = currentYear - birthYear - 1;
	}
	else fullAge = 0;

	countAge = currentYear - birthYear + 1;
	yearAge = countAge - 1;

	cout << fullAge << endl << countAge << endl << yearAge << endl;

	return 0;
}