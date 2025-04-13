#include <iostream>
using namespace std;

int main()
{
	int arr[100] = {};
	int n;
	do {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> arr[i];
		for (int i = n - 1; i >= 0; i--) cout << arr[i] << '\n';
		if (n != 0) cout << 0 << '\n';
	} while (n != 0);

	return 0;
}