#include <iostream>
using namespace std;

int main()
{
	double scoreCho = 72, scoreHan = 73.5;
	int cho[6] = {}, han[6] = {}, score[6] = { 13,7,5,3,3,2 };
	for (int i = 0; i < 6; i++) cin >> cho[i];
	for (int i = 0; i < 6; i++) cin >> han[i];
	for (int i = 0; i < 6; i++) {
		scoreCho += score[i] * cho[i];
		scoreHan += score[i] * han[i];
	}
	cout << (scoreCho > scoreHan ? "cocjr0208" : "ekwoo");

	return 0;
}