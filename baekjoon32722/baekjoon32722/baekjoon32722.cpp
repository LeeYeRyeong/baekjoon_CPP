#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a == 1 || a == 3) && (b == 6 || b == 8) && (c == 2 || c == 5) ? "JAH" : "EI");

	return 0;
}