#include <iostream>
using namespace std;

int main()
{
	int a, b, money;
	cin >> a >> b >> money;
	cout << (a + b < money * 2 ? a + b : (a + b) - 2 * money);
	return 0;
}