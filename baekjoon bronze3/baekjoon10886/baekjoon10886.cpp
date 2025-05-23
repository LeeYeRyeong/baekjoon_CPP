#include <iostream>
using namespace std;

int main()
{
	int n, check = 0;
	bool cute;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cute;
		if (cute == 1) check++;
	}
	cout << (check > n / 2 ? "Junhee is cute!" : "Junhee is not cute!");

	return 0;
}