#include <iostream>
using namespace std;

int main()
{
	int score[5] = {};
	int n, number = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> score[i];
	if (score[0] > score[2]) number += (score[0] - score[2]) * 508;
	else number += (score[2] - score[0]) * 108;
	if (score[1] > score[3]) number += (score[1] - score[3]) * 212;
	else number += (score[3] - score[1]) * 305;
	number += score[4] * 707;
	number *= 4763;
	cout << number;

	return 0;
}