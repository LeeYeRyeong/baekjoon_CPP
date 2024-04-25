#include <iostream>
using namespace std;

int main()
{
	int n, odd = 0, even = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		if (number % 2 == 0) even++;
		else odd++;
	}

	cout << (odd < even ? "Happy" : "Sad") << endl;

	return 0;
}