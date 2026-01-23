#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n * 5; i++) {
		if (i < n) {
			for (int j = 0; j < n * 5; j++) cout << '@';
		}
		else {
			for (int j = 0; j < n; j++) cout << '@';
		}
		cout << '\n';
	}

	return 0;
}