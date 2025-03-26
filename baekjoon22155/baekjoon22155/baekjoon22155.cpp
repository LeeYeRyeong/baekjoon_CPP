#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if ((a <= 1 && b <= 2) || (a <= 2 && b <= 1)) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}