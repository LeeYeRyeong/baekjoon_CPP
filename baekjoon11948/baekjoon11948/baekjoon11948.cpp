#include <iostream>
using namespace std;

int main()
{
	int score1[4] = {}, score2[2] = {};
	int total = 0;
	for (int i = 0; i < 4; i++) cin >> score1[i];
	for (int i = 0; i < 2; i++) cin >> score2[i];
	for (int i = 0; i < 3; i++) {
		int temp;
		if (score1[i] < score1[i + 1]) {
			temp = score1[i];
			score1[i] = score1[i + 1];
			score1[i + 1] = temp;
		}
	}
	for (int i = 0; i < 3; i++) total += score1[i];
	total += (score2[0] > score2[1] ? score2[0] : score2[1]);

	cout << total;

	return 0;
}