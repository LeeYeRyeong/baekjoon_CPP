#include <iostream>
using namespace std;

int main()
{
	int s, d, i, l, n;
	cin >> s >> d >> i >> l >> n;
	cout << (n * 4 - (s + d + i + l) > 0 ? n * 4 - (s + d + i + l) : 0);

	return 0;
}