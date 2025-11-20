#include <iostream>
using namespace std;

int main()
{
	int  attackA, attackB, lifeA, lifeB;
	cin >> attackA >> lifeA >> attackB >> lifeB;
	while (lifeA > 0 && lifeB > 0) {
		lifeA -= attackB;
		lifeB -= attackA;
	}
	cout << ((lifeA <= 0 && lifeB <= 0) ? "DRAW" : lifeA > lifeB ? "PLAYER A" : "PLAYER B");

	return 0;
}