#include <iostream>
using namespace std;

int main()
{
	int t, a, b, count;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		count = ((a * a) % (b * b) == 0 ? (a * a) / (b * b) : (a * a) / (b * b) + 1);
		cout << count << '\n';
	}

	return 0;
}