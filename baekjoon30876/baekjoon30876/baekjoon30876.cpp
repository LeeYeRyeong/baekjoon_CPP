#include <iostream>
using namespace std;

int main()
{
	int n, south, north, max = 0;
	int result[2] = { 0,1001 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		cin >> north >> south;
		if (result[1] > south) {
			result[0] = north;
			result[1] = south;
		}
	}

	cout << result[0] << " " << result[1] << endl;

	return 0;
}