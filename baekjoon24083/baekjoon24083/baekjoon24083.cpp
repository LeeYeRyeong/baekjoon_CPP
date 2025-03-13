#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << ((a + b) % 12 == 0 ? 12 : (a + b) % 12);

	return 0;
}