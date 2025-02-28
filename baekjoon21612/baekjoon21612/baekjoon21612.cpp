#include <iostream>
using namespace std;

int main()
{
	int b;
	cin >> b;
	cout << 5 * b - 400 << '\n' << (b == 100 ? 0 : (b < 100 ? 1 : -1));
	return 0;
}