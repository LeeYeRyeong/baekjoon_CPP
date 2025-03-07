#include <iostream>
using namespace std;

int main()
{
	long a, b, result1 = 0, result2 = 0;
	cin >> a >> b;
	if (a * b % 2 != 0) {
		result1 = (a * b - (a / 2 * b) > (a / 2 * b) ? a * b - (a / 2 * b) - (a / 2 * b) : (a / 2 * b) - a * b - (a / 2 * b));
		result2 = (a * b - (b / 2 * a) > (b / 2 * a) ? a * b - (b / 2 * a) - (b / 2 * a) : (b / 2 * a) - a * b - (b / 2 * a));
	}
	cout << (result1 < result2 ? result1 : result2);
	
	return 0;
}