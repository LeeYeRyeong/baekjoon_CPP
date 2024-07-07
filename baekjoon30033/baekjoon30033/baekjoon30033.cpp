#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	int plan[1000] = {}, study[1000] = {};
	cin >> n;
	for (int i = 0; i < n; i++) cin >> plan[i];
	for (int i = 0; i < n; i++) cin >> study[i];

	for (int i = 0; i < n; i++) {
		if (plan[i] <= study[i]) count++;
	}

	cout << count << endl;

	return 0;
}