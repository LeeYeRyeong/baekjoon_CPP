#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	sum += 1 + n;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) sum += i;
	}
	cout << sum;

	return 0;
}