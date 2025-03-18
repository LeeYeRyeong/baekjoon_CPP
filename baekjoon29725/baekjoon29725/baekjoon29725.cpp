#include <iostream>
using namespace std;

int main()
{
	char chess;
	int scoreWhite = 0, scoreBlack = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> chess;
			if (chess == 'P') scoreWhite += 1;
			else if (chess == 'p') scoreBlack += 1;
			else if (chess == 'N' || chess == 'B') scoreWhite += 3;
			else if (chess == 'n' || chess == 'b') scoreBlack += 3;
			else if (chess == 'R') scoreWhite += 5;
			else if (chess == 'r') scoreBlack += 5;
			else if (chess == 'Q') scoreWhite += 9;
			else if (chess == 'q') scoreBlack += 9;
		}
	}
	cout << scoreWhite - scoreBlack;

	return 0;
}