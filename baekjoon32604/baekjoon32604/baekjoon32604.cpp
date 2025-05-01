#include <iostream>
using namespace std;

int main()
{
	int scoreA, scoreB, previousScoreA = 0, previousScoreB = 0, n;
	bool check = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> scoreA >> scoreB;
		if (scoreA >= previousScoreA && scoreB >= previousScoreB) {
			previousScoreA = scoreA;
			previousScoreB = scoreB;
		}
		else check = false;
	}
	cout << (check ? "yes" : "no");
	
	return 0;
}