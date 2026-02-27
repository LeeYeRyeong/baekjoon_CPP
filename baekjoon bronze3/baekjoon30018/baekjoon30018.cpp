#include <iostream>
using namespace std;

int main()
{
	int a[100], b[100];
	int n, d, move = 0;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++)cin >> b[i];
	for (int i = 0; i < n; i++) {
		d = a[i] - b[i];
		if (d > 0) move += d;
	}
	cout << move;

	return 0;
}