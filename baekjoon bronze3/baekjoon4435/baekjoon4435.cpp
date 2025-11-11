#include <iostream>
using namespace std;

int main()
{
	int gandalf[6] = { 1,2,3,3,4,10 }, sauron[7] = { 1,2,2,2,3,5,10 };
	int n, gandalfScore = 0, sauronScore = 0, g, s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> g;
			gandalfScore += gandalf[j] * g;
		}
		for (int j = 0; j < 7; j++) {
			cin >> s;
			sauronScore += sauron[j] * s;
		}
		cout << "Battle " << i+1 << ": " << (gandalfScore == sauronScore ? "No victor on this battle field\n" :
			(gandalfScore > sauronScore ? "Good triumphs over Evil\n" : "Evil eradicates all trace of Good\n"));
		gandalfScore =0,sauronScore=0;
	}

	return 0;
}