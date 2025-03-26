#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double area, base, height;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> area >> base;
		height = area * 2 / base;
		cout << "The height of the triangle is " << fixed << setprecision(2) <<height << " units\n";
	}

	return 0;
}