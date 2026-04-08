#include <iostream>
#include <string>
using namespace std;

int main()
{
	string matrix[10][10] = {};
	bool check = true, result = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (matrix[i][0] != matrix[i][j]) check = false;
		}
		if (check) result = true;
		else check = true;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (matrix[0][i] != matrix[j][i]) check = false;
		}
		if (check) result = true;
		else check = true;
	}
	cout << result;

	return 0;
}