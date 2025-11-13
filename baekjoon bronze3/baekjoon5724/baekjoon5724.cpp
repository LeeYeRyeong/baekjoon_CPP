#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = n; i >= 1; i--) count += i * i;
		cout << count << '\n';
		count = 0;
	}

	return 0;
}