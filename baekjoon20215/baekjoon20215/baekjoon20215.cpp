#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int w, h;
	cin >> w >> h;
	cout << fixed << setprecision(9) << w + h - sqrt(static_cast<double>(pow(w, 2) + pow(h, 2)));

	return 0;
}