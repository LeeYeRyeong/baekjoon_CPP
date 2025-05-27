#include <iostream>
using namespace std;

int main()
{
	int score[5] = {};
	int n, max = 0, index;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> n;
			score[i] += n;
		}
		if (score[i] > max) max = score[i], index = i + 1;
	}
	cout << index << ' ' << max;

	return 0;
}