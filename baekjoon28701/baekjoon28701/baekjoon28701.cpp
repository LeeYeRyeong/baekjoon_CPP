#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, count[3] = {};
	cin >> n;
	for (int i = 0; i < n; i++) count[0] += i + 1;
	for (int i = 0; i < n; i++) count[1] = pow(count[0], 2);
	for (int i = 0; i < n; i++) count[2] += pow(i + 1, 3);

	for (int i = 0; i < 3; i++) cout << count[i] << endl;

	return 0;
}