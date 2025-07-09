#include <iostream>
using namespace std;

int main()
{
	int t, n, p1Score = 0, p2Score = 0;
	char p1, p2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> p1 >> p2;
			if ((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R')) p1Score++;
			else if ((p2 == 'R' && p1 == 'S') || (p2 == 'S' && p1 == 'P') || (p2 == 'P' && p1 == 'R')) p2Score++;
		}
		cout << (p1Score == p2Score ? "TIE\n" : p1Score > p2Score ? "Player 1\n" : "Player 2\n");
		p1Score = 0, p2Score = 0;
	}

	return 0;
}