#include <iostream>
using namespace std;

int main()
{
	int n, m, count = 0;
	cin >> n >> m;
	count += n;
	while (n >= m) {
		n /= m;
		count += n;
	}
	cout << count;

	return 0;
}