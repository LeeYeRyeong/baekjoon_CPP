#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	while (cin >> n) {
		if (n > 0) count++;
	}
	cout << count;

	return 0;
}