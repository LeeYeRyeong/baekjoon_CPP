#include <iostream>
using namespace std;

int main()
{
	int n0, n1, n4, t = 1;
	while (1) {
		cin >> n0;
		if (n0 == 0) break;
		n1 = 3 * n0;
		n4 = (((n1 % 2 == 0 ? n1 / 2 : (n1 + 1) / 2) * 3) / 9);
		cout << t++ << ". " << (n1 % 2 == 0 ? "even " : "odd ") << n4 << '\n';
	}

	return 0;
}