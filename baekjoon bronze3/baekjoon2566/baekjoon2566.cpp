#include <iostream>
using namespace std;

int main()
{
	int arr[9][9] = {};
	int max = -1, indexX = 0, indexY = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (max < arr[i][j]) {
				max = arr[i][j];
				indexX = i + 1;
				indexY = j + 1;
			}
		}
	}
	cout << max << '\n' << indexX << ' ' << indexY;

	return 0;
}