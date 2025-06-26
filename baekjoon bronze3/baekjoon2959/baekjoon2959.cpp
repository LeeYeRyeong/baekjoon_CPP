#include <iostream>
using namespace std;

int main()
{
	int n[4] = {};
	int area = 0;
	for (int i = 0; i < 4; i++) cin >> n[i];
	for (int i = 0; i < 3; i++) {
		for (int j = 1 + 1; j < 4; j++) {
			if (n[i] > n[j]) {
				int temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	area = n[0] * n[2];
	cout << area;

	return 0;
}