#include <iostream>
using namespace std;

int main()
{
	int n, plug, computer = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> plug;
		computer += --plug;
	}
	cout << ++computer;

	return 0;
}