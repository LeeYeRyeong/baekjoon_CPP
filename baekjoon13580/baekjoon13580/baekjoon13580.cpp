#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a == c || b == c || a == b || a + b == c || a + c == b || b + c == a ? 'S' : 'N');

	return 0;
}