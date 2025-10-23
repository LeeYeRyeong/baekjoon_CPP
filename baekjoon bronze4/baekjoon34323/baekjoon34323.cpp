#include <iostream>
using namespace std;

int main()
{
	long long n, m, s, nPrice, mPrice;
	cin >> n >> m >> s;
	nPrice = (s * (100 - n) * (m + 1)) / 100;
	mPrice = s * m;
	cout << (nPrice < mPrice ? nPrice : mPrice);

	return 0;
}