#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		(n == 1 ? count++ : count--);
	}
	cout << (count > 0 ? 1 : 2);

	return 0;
}