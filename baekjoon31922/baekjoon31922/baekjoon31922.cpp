#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	cout << max(n + k, m) << endl;

	return 0;
}