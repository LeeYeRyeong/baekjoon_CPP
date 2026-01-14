#include <iostream>
using namespace std;

int main()
{
	int n, score = 0;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		score += c - 'A' + 1;
	}
	cout << score;

	return 0;
}