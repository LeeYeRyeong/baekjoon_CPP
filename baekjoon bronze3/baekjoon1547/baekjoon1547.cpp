#include <iostream>
using namespace std;

int main()
{
	int n, a, b, index = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (index == a) index = b;
		else if (index == b) index = a;
	}
	cout << index;

	return 0;
}