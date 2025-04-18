#include <iostream>
#include <string>
using namespace std;

int main()
{
	string posA, posB;
	int x, y;
	cin >> posA >> posB;
	x = (posA[0] > posB[0] ? static_cast<int>(posA[0] - posB[0]) : static_cast<int>(posB[0] - posA[0]));
	y = (posA[1] > posB[1] ? static_cast<int>(posA[1] - posB[1]) : static_cast<int>(posB[1] - posA[1]));
	cout << (x < y ? x : y) << ' ' << (x > y ? x : y);

	return 0;
}