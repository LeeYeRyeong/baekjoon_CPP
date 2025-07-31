#include <iostream>
using namespace std;

int main()
{
	int n, m, count = 0, t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		cin >> n >> m;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if ((i * i + j * j + m) % (i * j) == 0) count++;
			}
		}
		cout << count << '\n';
		count = 0;
	}

	return 0;
}