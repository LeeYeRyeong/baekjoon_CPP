#include <iostream>
using namespace std;

int main()
{
	int a1, p1, r1, p2;
	cin >> a1 >> p1 >> r1 >> p2;
	cout << (p1 * 1.0 / a1 < p2 / (r1 * r1 * 3.14159265359) ? "Slice of pizza" : "Whole pizza");

	return 0;
}