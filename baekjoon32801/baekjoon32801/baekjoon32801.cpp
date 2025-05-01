#include <iostream>
using namespace std;

int main()
{
	int n, a, b, countF = 0, countB = 0, countFB = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) {
		if (i % a == 0 && i % b == 0) countFB++;
		else if (i % a == 0) countF++;
		else if (i % b == 0) countB++;
	}
	cout << countF << ' ' << countB << ' ' << countFB;

	return 0;
}