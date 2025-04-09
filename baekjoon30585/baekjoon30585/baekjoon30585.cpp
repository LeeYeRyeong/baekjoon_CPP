#include <iostream>
using namespace std;

int main()
{
	int red = 0, blue = 0, r, c;
	char color;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> color;
			if (color == '0') red++;
			else if (color == '1') blue++;
		}
	}
	cout << (red < blue ? red : blue);

	return 0;
}