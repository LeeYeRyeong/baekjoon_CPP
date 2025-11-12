#include <iostream>
using namespace std;

int main()
{
	int a, p, m, branch = 1;
	while (1) {
		cin >> a;
		if (a == 0) break;
		for (int i = 0; i < a; i++) {
			cin >> p >> m;
			branch = branch * p - m;
		}
		cout << branch << '\n';
		branch = 1;
	}

	return 0;
}