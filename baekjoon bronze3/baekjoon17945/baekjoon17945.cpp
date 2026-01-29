#include <iostream>
using namespace std;

int main()
{
	int a, b, answer1 = 0, answer2 = 0;
	cin >> a >> b;
	if (b == 0) {
		answer1 = 2 * a * -1;
		answer2 = 0;
	}
	for (int i = 1; i <= (b < 0 ? b * -1 : b); i++) {
		if (b % i == 0 && (i * i + 2 * a * i + b == 0)) {
			answer1 = i;
			answer2 = b / i;
			break;
		}
		else if (b % i == 0 && (i * i + 2 * a * (i * -1) + b == 0)) {
			answer1 = i * -1;
			answer2 = b / (i * -1);
			break;
		}
	}
	if (answer1 > answer2) {
		int temp = answer1;
		answer1 = answer2;
		answer2 = temp;
	}
	if (answer1 == answer2) cout << answer1;
	else cout << answer1 << ' ' << answer2;

	return 0;
}