#include <iostream>
using namespace std;

int main()
{
	int n, chess = 0;
	cin >> n;
	if (n % 2 == 0) chess = (n / 2 + 1) * (n / 2 + 1);
	else chess = (n / 2 + 1) * (n / 2 + 2);
	cout << chess;

	return 0;
}