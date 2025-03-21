#include <iostream>
using namespace std;

int main()
{
	int n, w, h;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w >> h;
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				cout << 'X';
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}