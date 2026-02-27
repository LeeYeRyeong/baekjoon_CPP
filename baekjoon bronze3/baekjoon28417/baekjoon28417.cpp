#include <iostream>
using namespace std;

int main()
{
	int n, maxScore = 0, score = 0, run, trick, maxRun = 0, maxTrick1 = 0, maxTrick2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> run;
			maxRun = (maxRun < run ? run : maxRun);
		}
		for (int j = 0; j < 5; j++) {
			cin >> trick;
			if (maxTrick1 < trick) {
				maxTrick2 = maxTrick1;
				maxTrick1 = trick;
			}
			else if (maxTrick2 < trick) maxTrick2 = trick;
		}
		score = maxRun + maxTrick1 + maxTrick2;
		maxScore = (maxScore > score ? maxScore : score);
		maxRun = 0, maxTrick1 = 0, maxTrick2 = 0;
	}
	cout << maxScore;

	return 0;
}