#include <iostream>
using namespace std;

int main()
{
	int a, b, c, sum = 91;
	cin >> a >> b >> c;
	sum += a + b * 3 + c;
	cout << "The 1-3-sum is " << sum;

	return 0;
}