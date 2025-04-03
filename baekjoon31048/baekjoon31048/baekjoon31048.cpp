#include <iostream>
using namespace std;

int main()
{
	int n, num, result = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > 4) cout << 0;
		else {
			for (int i = 1; i <= num; i++) result *= i;
			cout << result % 10;
		}
		cout << '\n';
		result = 1;
	}

	return 0;
}