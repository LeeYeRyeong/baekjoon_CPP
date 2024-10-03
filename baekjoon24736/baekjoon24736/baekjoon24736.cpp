#include <iostream>
using namespace std;

int main()
{
	int goal[5] = { 6,3,2,1,2 };
	int score1 = 0, score2 = 0, n;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		score1 += n * goal[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> n;
		score2 += n * goal[i];
	}
	cout << score1 << " " << score2 << endl;

	return 0;
}