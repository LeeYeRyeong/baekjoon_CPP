#include <iostream>
using namespace std;

int main()
{
	int n, year;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> year;
		if ((year + 1) % (year % 100) == 0) cout << "Good\n";
		else cout << "Bye\n";
	}
	return 0;
}