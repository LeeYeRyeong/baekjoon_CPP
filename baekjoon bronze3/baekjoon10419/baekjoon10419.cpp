#include <iostream>
using namespace std;

int main()
{
	int t, d, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d;
		for (int j = 0; j * j + j <= d; j++) t = j;
		cout << t << '\n';
	}
	return 0;
}