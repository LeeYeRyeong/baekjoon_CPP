#include <iostream>
using namespace std;

int main()
{
	long n, sum = 0, number;
	cin >> n;
	for (int i = 0; i < n * n; i++) {
		cin >> number;
		sum += number;
	}
	cout << sum;

	return 0;
}