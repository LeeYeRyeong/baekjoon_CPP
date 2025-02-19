#include <iostream>
using namespace std;

int main()
{
	int n, day, count = 0;
	char a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> day;
		if (day <= 90) count++;
	}
	cout << count;

	return 0;
}