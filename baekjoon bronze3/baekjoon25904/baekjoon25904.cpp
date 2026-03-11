#include <iostream>
using namespace std;

int main()
{
	int voice[100] = {};
	int n, x, index = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> voice[i];
	while (x <= voice[index]) {
		x++;
		index++;
		if (index >= n) index = 0;
	}
	cout << index + 1;

	return 0;
}