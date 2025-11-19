#include <iostream>
using namespace std;

int main()
{
	double water;
	int n, m;
	cin >> n >> m;
	water = static_cast<double>(m) / static_cast<double>(n);
	cout << (water >= 0.81 ? "yaho" : "no");

	return 0;
}