#include <iostream>
using namespace std;

int main()
{
	int pos[3][2] = {};
	int x, y;
	for (int i = 0; i < 3; i++) cin >> pos[i][0] >> pos[i][1];
	x = (pos[0][0] == pos[1][0] ? pos[2][0] : (pos[0][0] == pos[2][0] ? pos[1][0] : pos[0][0]));
	y = (pos[0][1] == pos[1][1] ? pos[2][1] : (pos[0][1] == pos[2][1] ? pos[1][1] : pos[0][1]));
	cout << x << ' ' << y;

	return 0;
}