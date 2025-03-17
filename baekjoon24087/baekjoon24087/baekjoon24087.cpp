#include <iostream>
using namespace std;

int main()
{
	int a, b, s;
	cin >> s >> a >> b;
	cout << (s <= a ? 250 : ((s - a) % b == 0 ? (s - a) / b * 100 + 250 : ((s - a) / b + 1) * 100 + 250));

	return 0;
}