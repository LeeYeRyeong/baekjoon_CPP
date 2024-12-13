#include <iostream>
using namespace std;

int main()
{
	int startH, startM, startS, finishH, finishM, finishS, resultH, resultM, resultS;
	for (int i = 0; i < 3; i++) {
		cin >> startH >> startM >> startS >> finishH >> finishM >> finishS;
		if (finishS < startS) {
			finishM--;
			finishS += 60;
		}
		resultS = finishS - startS;
		if (finishM < startM) {
			finishH--;
			finishM += 60;
		}
		resultM = finishM - startM;
		resultH = finishH - startH;

		cout << resultH << " " << resultM << " " << resultS << endl;
	}

	return 0;
}