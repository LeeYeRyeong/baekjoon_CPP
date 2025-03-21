#include <iostream>
using namespace std;

int main()
{
	int problem[30] = {};
	int n, dollar, sum = 0;
	cin >> n >> dollar;
	for (int i = 0; i < n; i++) {
		cin >> problem[i];
		sum += problem[i];
	}
	for (int i = 0; i < n; i++) cout << (dollar / sum) * problem[i] << '\n';

	return 0;
}