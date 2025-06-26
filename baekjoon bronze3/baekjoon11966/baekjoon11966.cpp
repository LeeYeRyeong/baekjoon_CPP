#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, result = 0;
	cin >> n;
	for (int i = 0; pow(2, i) <= n; i++) {
		if (pow(2, i) == n) result = 1;
	}
	cout << result;

	return 0;
}