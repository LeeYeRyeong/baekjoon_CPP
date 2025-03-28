#include <iostream>
using namespace std;

int main()
{
	int n, m, score = 0;
	cin >> n >> m;
	score += (n * 50) - (m * 10) + (n > m ? 500 : 0);
	cout << score;

	return 0;
}