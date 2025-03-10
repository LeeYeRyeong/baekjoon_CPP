#include <iostream>
using namespace std;

int main()
{
	int n, a, d, g, score, result = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> d >> g;
		score = a * (d + g);
		if (a == d + g)score *= 2;
		result = (result < score ? score : result);
	}
	cout << result;

	return 0;
}