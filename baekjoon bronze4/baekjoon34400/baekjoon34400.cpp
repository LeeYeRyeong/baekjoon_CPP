#include <iostream>
using namespace std;

int main()
{
	int n, t;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		cout << (t % 25 < 17 ? "ONLINE\n" : "OFFLINE\n");
	}

	return 0;
}