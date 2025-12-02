#include <iostream>
using namespace std;

int main()
{
	long sum = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) sum += i;
	}
	sum = sum * 5 - 24;
	cout << sum;

	return 0;
}