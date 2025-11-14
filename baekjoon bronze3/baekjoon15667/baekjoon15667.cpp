#include <iostream>
using namespace std;

int main()
{
	int n, k = 1;
	cin >> n;
	while (k * k + k + 1 != n) k++;
	cout << k;

	return 0;
}