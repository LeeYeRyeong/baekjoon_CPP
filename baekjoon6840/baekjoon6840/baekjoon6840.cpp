#include <iostream>
using namespace std;

int main()
{
	int num[3] = {};
	cin >> num[0] >> num[1] >> num[2];

	for (int i = 0; i < 2; i++) {
		if (num[i] > num[i + 1]) {
			int temp = num[i];
			num[i] = num[i + 1];
			num[i + 1] = temp;
		}
	}

	for (int i = 2; i > 0; i--) {
		if (num[i] < num[i - 1]) {
			int temp = num[i];
			num[i] = num[i - 1];
			num[i - 1] = temp;
		}
	}

	cout << num[1] << endl;

	return 0;
}