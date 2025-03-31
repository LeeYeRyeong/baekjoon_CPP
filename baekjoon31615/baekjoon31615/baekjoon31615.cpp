#include <iostream>
using namespace std;

int main()
{
	int n, m, sum = 0, count = 0;
	cin >> n >> m;
	sum = n + m;
	while (sum > 0) {
		count++;
		sum /= 10;
	}
	cout << count;

	return 0;
}