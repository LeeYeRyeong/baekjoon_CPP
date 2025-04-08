#include <iostream>
using namespace std;

int main()
{
	int digitNumber[10] = {};
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		digitNumber[num] = 1;
	}
	for (int i = 0; i < 10; i++) {
		if (digitNumber[i] == 1) cout << i << '\n';
	}

	return 0;
}