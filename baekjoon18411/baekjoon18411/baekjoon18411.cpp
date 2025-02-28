#include <iostream>
using namespace std;

int main()
{
	int a, b, c, sum = 0;
	cin >> a >> b >> c;
	if (a + b > sum) sum = a + b;
	if (a + c > sum) sum = a + c;
	if (c + b > sum) sum = c + b;
	cout << sum;

	return 0;
}