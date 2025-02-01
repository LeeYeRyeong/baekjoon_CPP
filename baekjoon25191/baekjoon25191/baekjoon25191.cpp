#include <iostream>
using namespace std;

int main()
{
	int n, coke, beer;
	cin >> n >> coke >> beer;
	cout << ((coke / 2 + beer) < n ? (coke / 2 + beer) : n);

	return 0;
}