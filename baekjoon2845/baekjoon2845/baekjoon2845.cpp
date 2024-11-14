#include <iostream>
using namespace std;

int main()
{
	int l, p;
	int count[5] = {};
	cin >> l >> p;
	for (int i = 0; i < 5; i++) cin >> count[i];
	for (int i = 0; i < 5; i++) cout << count[i] - (l * p) << " ";

	return 0;
}