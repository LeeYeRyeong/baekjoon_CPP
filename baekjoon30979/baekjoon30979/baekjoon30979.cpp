#include <iostream>
using namespace std;

int main()
{
	int t, n, f, time = 0;
	cin >> t >> n;
	for (int i = 0; i < n; i++) {
		cin >> f;
		time += f;
	}
	cout << (t > time ? "Padaeng_i Cry" : "Padaeng_i Happy");

	return 0;
}