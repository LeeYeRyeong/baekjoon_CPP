#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	cout << (n % m == 0 ? n / m : n / m + 1);

	return 0;
}