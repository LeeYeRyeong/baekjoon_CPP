#include <iostream>
using namespace std;

int main()
{
	int n, min = 1000000000, trash, index = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> trash;
		if (trash < min) {
			min = trash;
			index = i;
		}
	}
	cout << index;

	return 0;
}