#include <iostream>
using namespace std;

int main()
{
	int n, vote, max = 0, maxIndex = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> vote;
		if (max < vote) {
			max = vote;
			maxIndex = i + 1;
		}
	}
	cout << (maxIndex == 1 ? 'S' : 'N');

	return 0;
}