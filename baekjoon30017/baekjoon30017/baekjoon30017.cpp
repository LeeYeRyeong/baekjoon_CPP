#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << (a <= b + 1 ? a + a - 1 : b + b + 1);
	
	return 0;
}