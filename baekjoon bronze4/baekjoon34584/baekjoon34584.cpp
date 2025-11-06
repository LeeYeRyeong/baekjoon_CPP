#include <iostream>
using namespace std;

int main()
{
	int x, d;
	cin >> x >> d;
	cout << (x * 2 <= d ? "double it" : "take it");

	return 0;
}