#include <iostream>
using namespace std;

int main()
{
	int score[3] = {};
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> score[j];
			if (score[j] >= 10) count++;
		}
		for (int j = 0; j < 3; j++) cout << score[j] << ' ';
		if (count == 0) cout << "\nzilch\n\n";
		else if (count == 1) cout << "\ndouble\n\n";
		else if (count == 2) cout << "\ndouble-double\n\n";
		else if (count == 3) cout << "\ntriple-double\n\n";
		count = 0;
	}

	return 0;
}