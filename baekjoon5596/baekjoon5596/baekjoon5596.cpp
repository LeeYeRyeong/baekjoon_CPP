#include <iostream>
using namespace std;

int main()
{
	int score, total1 = 0, total2 = 0;
	for (int i = 0; i < 4; i++) {
		cin >> score;
		total1 += score;
	}
	for (int i = 0; i < 4; i++) {
		cin >> score;
		total2 += score;
	}
	cout << (total1 > total2 ? total1 : total2);

	return 0;
}