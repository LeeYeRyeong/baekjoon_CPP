#include <iostream>
using namespace std;

int main()
{
	int a, b, c, mul = 1;
	bool check = false;
	cin >> a >> b >> c;
	if (a % 2 == 1) {
		mul *= a;
		check = true;
	}
	if (b % 2 == 1) {
		mul *= b;
		check = true;
	}
	if (c % 2 == 1) {
		mul *= c;
		check = true;
	}
	cout << (check ? mul : a * b * c);

	return 0;
}