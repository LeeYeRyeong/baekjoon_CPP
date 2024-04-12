#include <iostream>
using namespace std;

int main()
{
	int score[11][2] = { {12, 1600}, {11, 894}, {11, 1327},{10, 1311},{9, 1004},{9, 1178},{9, 1357},{8, 837},{7, 1055},{6, 556},{6, 773} };
	int n;
	
	cin >> n;
	cout << score[n - 1][0] << " "  << score[n - 1][1] << endl;

	return 0;
}