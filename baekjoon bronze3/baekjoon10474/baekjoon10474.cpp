#include <iostream>
using namespace std;

int main()
{
	int n, m, div, res;
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		res = n / m, div = n % m;
		cout << res << ' ' << div << " / " << m << '\n';
	}

	return 0;
}