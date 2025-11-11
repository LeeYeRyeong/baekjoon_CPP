#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 2; i <= n; i += 2) {
		for (int j = 1; j <= n - i; j++) {
			int c = n - i - j;
			if (c < j + 2) break;
			count++;
		}
	}
	cout << count;

	return 0;
}