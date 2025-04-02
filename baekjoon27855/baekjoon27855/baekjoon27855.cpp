#include <iostream>
using namespace std;

int main()
{
	int h1, h2, b1, b2, score1, score2;
	cin >> h1 >> b1 >> h2 >> b2;
	score1 = h1 * 3 + b1;
	score2 = h2 * 3 + b2;
	if (score1 == score2) cout << "NO SCORE";
	else if (score1 > score2) cout << 1 << ' ' << score1 - score2;
	else cout << 2 << ' ' << score2 - score1;

	return 0;
}