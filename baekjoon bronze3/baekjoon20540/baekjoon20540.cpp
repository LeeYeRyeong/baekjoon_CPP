#include <iostream>
using namespace std;

int main()
{
	char mbti[4], mbtiReverse[4];
	for (int i = 0; i < 4; i++) cin >> mbti[i];
	if (mbti[0] == 'E') mbtiReverse[0] = 'I';
	else mbtiReverse[0] = 'E';
	if (mbti[1] == 'S') mbtiReverse[1] = 'N';
	else mbtiReverse[1] = 'S';
	if (mbti[2] == 'T') mbtiReverse[2] = 'F';
	else mbtiReverse[2] = 'T';
	if (mbti[3] == 'J') mbtiReverse[3] = 'P';
	else mbtiReverse[3] = 'J';
	for (int i = 0; i < 4; i++) cout << mbtiReverse[i];

	return 0;
}