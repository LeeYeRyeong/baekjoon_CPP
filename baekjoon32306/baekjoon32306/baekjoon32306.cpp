#include <iostream>
using namespace std;

int main()
{
	int shoot1[3] = {}, shoot2[3] = {}, score[3] = { 1,2,3 };
	int score1 = 0, score2 = 0;
	for (int i = 0; i < 3; i++) cin >> shoot1[i];
	for (int i = 0; i < 3; i++) cin >> shoot2[i];
	for (int i = 0; i < 3; i++) {
		score1 += shoot1[i] * score[i];
		score2 += shoot2[i] * score[i];
	}
	cout << (score1 == score2 ? 0 : (score1 > score2 ? 1 : 2));

	return 0;
}