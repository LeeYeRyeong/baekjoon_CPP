#include <iostream>
using namespace std;

int main()
{
	int shirt[6] = {};
	int n, t, p, resultT = 0, resultPSet = 0, resultPSingle = 0;
	cin >> n;
	for (int i = 0; i < 6; i++) cin >> shirt[i];
	cin >> t >> p;
	for (int i = 0; i < 6; i++) resultT += (shirt[i] % t == 0 ? shirt[i] / t : shirt[i] / t + 1);
	resultPSet = n / p, resultPSingle = n % p;
	cout << resultT << '\n' << resultPSet << ' ' << resultPSingle;

	return 0;
}