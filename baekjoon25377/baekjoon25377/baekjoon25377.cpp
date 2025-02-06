#include <iostream>
using namespace std;

int main()
{
	int n, time = 1001;
	int a[100] = {}, b[100] = {};
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
	for (int i = 0; i < n; i++) {
		if (a[i] <= b[i] && b[i] < time) time = b[i];
	}
	cout << (time != 1001 ? time : -1);

	return 0;
}