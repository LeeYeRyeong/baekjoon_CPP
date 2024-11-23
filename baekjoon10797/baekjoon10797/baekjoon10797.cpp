#include <iostream>
using namespace std;

int main()
{
	int car[5] = {};
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < 5; i++) cin >> car[i];
	for (int i = 0; i < 5; i++) if (car[i] == n) count++;
	cout << count;

	return 0;
}