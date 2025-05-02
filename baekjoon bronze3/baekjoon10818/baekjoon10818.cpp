#include <iostream>
using namespace std;

int main()
{
	int n, min = 1000000, max = -1000000, value;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		if (min > value) min = value;
		if (max < value) max = value;
	}
	cout << min << ' ' << max;

	return 0;
}