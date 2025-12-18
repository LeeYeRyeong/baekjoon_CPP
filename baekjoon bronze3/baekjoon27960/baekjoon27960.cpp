#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a[10] = {}, b[10] = {};
	int scoreA, scoreB, scoreC = 0;
	cin >> scoreA >> scoreB;
	for (int i = 9; i >= 0; i--) {
		if (scoreA >= pow(2, i)) {
			a[i] = 1;
			scoreA -= pow(2, i);
		}
		if (scoreB >= pow(2, i)) {
			b[i] = 1;
			scoreB -= pow(2, i);
		}
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != b[i]) scoreC += pow(2, i);
	}
	cout << scoreC;

	return 0;
}