#include <iostream>
using namespace std;

int main()
{
	int a, p;
	cin >> a >> p;
	cout << (a * 7 == p * 13 ? "lika" : (a * 7 > p * 13 ? "Axel" : "Petra"));

	return 0;
}