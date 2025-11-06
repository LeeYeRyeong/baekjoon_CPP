#include <iostream>
using namespace std;

int main()
{
	int n, walk, score = 0;
	cin >> n >> walk;
	score += (n * 10) + (n >= 3 ? 20 : 0) + (n == 5 ? 50 : 0) - (walk > 1000 ? 15 : 0);
	cout << (score < 0 ? 0 : score);

	return 0;
}