#include <iostream>
using namespace std;

int main()
{
	int a, b, c, answer1, answer2;
	char math1, math2;
	cin >> a >> math1 >> b >> math2 >> c;
	if (math1 == '+') answer1 = a + b;
	else if (math1 == '-') answer1 = a - b;
	else if (math1 == '*') answer1 = a * b;
	else if (math1 == '/') answer1 = a / b;
	if (math2 == '+') answer1 += c;
	else if (math2 == '-') answer1 -= c;
	else if (math2 == '*') answer1 *= c;
	else if (math2 == '/') answer1 /= c;
	if (math2 == '+') answer2 = b + c;
	else if (math2 == '-') answer2 = b - c;
	else if (math2 == '*') answer2 = b * c;
	else if (math2 == '/') answer2 = b / c;
	if (math1 == '+') answer2 = a + answer2;
	else if (math1 == '-') answer2 = a - answer2;
	else if (math1 == '*') answer2 = a * answer2;
	else if (math1 == '/') answer2 = a / answer2;
	cout << (answer1 < answer2 ? answer1 : answer2) << '\n' << (answer1 > answer2 ? answer1 : answer2);

	return 0;
}