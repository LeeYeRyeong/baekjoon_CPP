#include <iostream>
using namespace std;

int main()
{
	int max[3] = {}, mel[3] = {};
	int maxTime = 0, melTime = 0;

	for (int i = 0; i < 3; i++) cin >> max[i];
	for (int i = 0; i < 3; i++) cin >> mel[i];
	maxTime = max[0] * 3 + max[1] * 20 + max[2] * 120;
	melTime = mel[0] * 3 + mel[1] * 20 + mel[2] * 120;

	if (maxTime == melTime) cout << "Draw" << endl;
	else cout << (maxTime > melTime ? "Max" : "Mel") << endl;

	return 0;
}