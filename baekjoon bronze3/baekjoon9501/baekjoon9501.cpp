#include <iostream>
using namespace std;

int main()
{
	double g;
	int t, n, d, v, f, c, count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> d;
		for (int j = 0; j < n; j++) {
			cin >> v >> f >> c;
			g = v * (f * 1.0 / c);
			if(g >= d) count++;
		}
		cout << count << '\n';
		count = 0;
	}

	return 0;
}