#include <iostream>
using namespace std;

int main()
{
	int a, b, c, maxScore = 0, score = 0, oneHand, nolook, phone, n;
	cin >> a >> b >> c >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> oneHand >> nolook >> phone;
			score += oneHand * a + nolook * b + phone * c;
		}
		maxScore = (maxScore > score ? maxScore : score);
		score = 0;
	}
	cout << maxScore;

	return 0;
}