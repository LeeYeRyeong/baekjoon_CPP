#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, dot = 2;
	cin >> n;
	dot = pow(dot, n) + 1;
	cout << dot * dot;

	return 0;
}