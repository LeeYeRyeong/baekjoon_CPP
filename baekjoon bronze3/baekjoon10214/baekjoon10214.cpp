#include <iostream>
using namespace std;

int main()
{
	int t, y, k, scoreY = 0, scoreK = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> y >> k;
			scoreY += y, scoreK += k;
		}
		cout << (scoreY == scoreK ? "Draw\n" : scoreY > scoreK ? "Yonsei\n" : "Korea\n");
		scoreY = 0, scoreK = 0;
	}

	return 0;
}