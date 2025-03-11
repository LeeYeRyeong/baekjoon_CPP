#include <iostream>
using namespace std;

int main()
{
	int n, m, cost = 0;
	cin >> n >> m;
	cost = (n - m > 60 ? ((60 - m) * 1500 + (n - 60) * 3000) : (n * 1500));
	cout << cost;

	return 0;
}