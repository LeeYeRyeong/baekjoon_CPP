#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, p, n, m, countP = 0, countN = 0, countM = 0;
	cin >> a >> b >> c >> d >> p >> m >> n;
	countP = (p % (a + b) > 0 && p % (a + b) <= a ? 1 : 0) + (p % (c + d) > 0 && p % (c + d) <= c ? 1 : 0);
	countN = (n % (a + b) > 0 && n % (a + b) <= a ? 1 : 0) + (n % (c + d) > 0 && n % (c + d) <= c ? 1 : 0);
	countM = (m % (a + b) > 0 && m % (a + b) <= a ? 1 : 0) + (m % (c + d) > 0 && m % (c + d) <= c ? 1 : 0);
	cout << countP << '\n' << countM << '\n' << countN;

	return 0;
}