#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long result = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) result += pow(i, 3);
	cout << result;

	return 0;
}