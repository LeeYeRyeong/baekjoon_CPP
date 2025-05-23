#include <iostream>
using namespace std;

int main()
{
	long count = 0;
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) count += i;
	cout << count << '\n' << 2;

	return 0;
}