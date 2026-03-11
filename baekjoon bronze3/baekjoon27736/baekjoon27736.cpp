#include <iostream>
using namespace std;

int main()
{
	int n, agree = 0, disagree = 0, no = 0, write;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> write;
		if (write == 1) agree++;
		else if (write == -1) disagree++;
		else if (write == 0) no++;
	}
	if (no >= (n % 2 == 1 ? n / 2 + 1 : n / 2)) cout << "INVALID";
	else if (agree > disagree) cout << "APPROVED";
	else cout << "REJECTED";

	return 0;
}