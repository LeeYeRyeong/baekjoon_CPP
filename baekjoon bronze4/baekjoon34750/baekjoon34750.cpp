#include <iostream>
using namespace std;

int main()
{
	int n, give;
	cin >> n;
	if (n >= 1000000) give = n * 0.2;
	else if (n >= 500000) give = n * 0.15;
	else if (n >= 100000) give = n * 0.1;
	else give = n * 0.05;
	cout << give << ' ' << n - give;

	return 0;
}