#include <iostream>
using namespace std;

int main()
{
	long a, b;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << (a * a) / (b * b) << '\n';
	}

	return 0;
}