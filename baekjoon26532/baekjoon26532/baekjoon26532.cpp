#include <iostream>
using namespace std;

int main()
{
	unsigned int n, m, seed = 0;
	cin >> n >> m;
	seed = ((n * m) % (4840 * 5) == 0 ? (n * m) / (4840 * 5) : (n * m) / (4840 * 5) + 1);
	cout << seed << endl;

	return 0;
}