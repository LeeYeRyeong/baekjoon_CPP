#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << ((a + b * 7 >= 1 && a + b * 7 <= 30) ? 1 : 0);

	return 0;
}