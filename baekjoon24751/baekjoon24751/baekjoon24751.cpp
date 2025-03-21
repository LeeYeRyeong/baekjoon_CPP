#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(10) << 100.0 / static_cast<double>(n) << '\n' << 100.0 / (100.0 - static_cast<double>(n));

	return 0;
}