#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, w, h, length, max;
	cin >> n >> w >> h;
	max = sqrt(w * w + h * h);
	for (int i = 0; i < n; i++) {
		cin >> length;
		if (max < length) cout << "NE\n";
		else cout << "DA\n";
	}

	return 0;
}