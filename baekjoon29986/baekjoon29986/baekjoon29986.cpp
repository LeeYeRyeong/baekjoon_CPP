#include <iostream>
using namespace std;

int main()
{
	int n, h, need, count = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> need;
		if (need <= h) count++;
	}
	cout << count;

	return 0;
}