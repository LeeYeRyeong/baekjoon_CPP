#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= 500; i++) {
		for (int j = i; j <= 500; j++) {
			if (i * i + n == j * j) count++;
		}
	}
	cout << count;

	return 0;
}