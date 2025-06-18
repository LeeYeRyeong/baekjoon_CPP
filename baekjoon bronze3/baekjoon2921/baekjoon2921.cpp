#include <iostream>
using namespace std;

int main()
{
	long count = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= i * 2; j++) count += j;
	}
	cout << count;

	return 0;
}