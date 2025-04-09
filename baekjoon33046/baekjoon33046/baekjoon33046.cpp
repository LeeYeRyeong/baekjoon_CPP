#include <iostream>
using namespace std;

int main()
{
	int dice1, dice2, dice3, dice4, n = 1;
	cin >> dice1 >> dice2 >> dice3 >> dice4;
	n = (((n + dice1 + dice2) % 4 == 0 ? 3 : ((n + dice1 + dice2) % 4 - 1)) == 0 ? 4 : ((n + dice1 + dice2) % 4 == 0 ? 3 : ((n + dice1 + dice2) % 4 - 1)));
	cout << (((n + dice3 + dice4) % 4 == 0 ? 3 : (n + dice3 + dice4) % 4 - 1) == 0 ? 4 : ((n + dice3 + dice4) % 4 == 0 ? 3 : (n + dice3 + dice4) % 4 - 1));

	return 0;
}