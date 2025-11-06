#include <iostream>
using namespace std;

int main()
{
	int x, y, z, u, v, w, total = 0;
	cin >> x >> y >> z >> u >> v >> w;
	total += x * (u / 100) + y * (v / 50) + z * (w / 20);
	cout << total;

	return 0;
}