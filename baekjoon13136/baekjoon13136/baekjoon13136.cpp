#include <iostream>
using namespace std;

int main()
{
	long r, c, n;
	cin >> r >> c >> n;
	cout << (r % n == 0 ? r / n : r / n + 1) * (c % n == 0 ? c / n : c / n + 1);

	return 0;
}