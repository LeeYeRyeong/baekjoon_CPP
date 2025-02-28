#include <iostream>
using namespace std;

int main()
{
	long long result = 1;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) result *= i;
	cout << result / static_cast<long long>(24 * 60 * 60 * 7);

	return 0;
}