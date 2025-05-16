#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char grade[3] = {};
	double score = 0.0f;
	cin >> grade;
	score += (grade[0] != 'F' ? 69 - static_cast<int>(grade[0]) : 0);
	if (grade[1] == '+') score += 0.3;
	else if (grade[1] == '-') score -= 0.3;
	cout << fixed << setprecision(1) << score;

	return 0;
}