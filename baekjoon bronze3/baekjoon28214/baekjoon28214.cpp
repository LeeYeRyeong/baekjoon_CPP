#include <iostream>
using namespace std;

int main()
{
	int n, k, p, bread = 0, cream, count = 0;
	cin >> n >> k >> p;
	for (int i = 0; i < n * k; i++) {
		cin >> cream;
		if (cream == 1) bread++;
		if ((i + 1) % k == 0) {
			count += ((bread > k - p) ? 1 : 0);
			bread = 0;
		}
	}
	cout << count;

	return 0;
}