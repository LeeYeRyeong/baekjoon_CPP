#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	if (n >= 4) count = (n - 3) * (n - 2) * (n - 1) / 6;
	cout << count;

	return 0;
}