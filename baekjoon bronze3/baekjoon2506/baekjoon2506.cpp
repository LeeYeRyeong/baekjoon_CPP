#include <iostream>
using namespace std;

int main()
{
	int n, score = 0, count = 0, answer;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> answer;
		if (answer == 1) score += ++count;
		else count = 0;
	}
	cout << score;

	return 0;
}