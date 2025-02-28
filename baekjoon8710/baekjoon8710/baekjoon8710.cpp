#include <iostream>
using namespace std;

int main()
{
	int n, m, k, count = 0;
	cin >> n >> m >> k;
	count = ((m - n) % k == 0 ? (m - n) / k : (m - n) / k + 1);
	cout << count;

	return 0;
}