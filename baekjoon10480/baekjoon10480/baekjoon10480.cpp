#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << n << (n % 2 == 0 ? " is even\n" : " is odd\n");
	}
	return 0;
}