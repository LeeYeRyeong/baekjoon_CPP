#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double tempPre, tempCur, gap = 0;
	cin >> tempPre;
	while (1) {
		cin >> tempCur;
		if (tempCur == 999) break;
		gap = tempCur - tempPre;
		cout << fixed << setprecision(2) << gap << '\n';
		tempPre = tempCur;
	}

	return 0;
}