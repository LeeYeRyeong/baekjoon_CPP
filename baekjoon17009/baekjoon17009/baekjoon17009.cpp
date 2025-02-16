#include <iostream>
using namespace std;

int main()
{
	int apple[3], banana[3];
	int scoreA = 0, scoreB = 0;
	for (int i = 0; i < 3; i++) cin >> apple[i];
	for (int i = 0; i < 3; i++) cin >> banana[i];
	scoreA = apple[0] * 3 + apple[1] * 2 + apple[2];
	scoreB = banana[0] * 3 + banana[1] * 2 + banana[2];

	if (scoreA > scoreB) cout << "A";
	else if (scoreA < scoreB) cout << "B";
	else cout << "T";

	return 0;
}