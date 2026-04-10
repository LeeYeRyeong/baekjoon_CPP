#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, k, sum = 0;
	cin >> n >> k;
	sum += n;
	for (int i = 0; i < k; i++) sum += (n * pow(10, i + 1));
	cout << sum;

	return 0;
}