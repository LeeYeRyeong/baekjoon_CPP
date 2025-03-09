#include <iostream>
using namespace std;

int main()
{
	bool status = false;
	char image[15][15] = {};
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			cin >> image[i][j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (image[i][j] == 'w') {
				cout << "chunbae";
				status = true;
				break;
			}
			if (image[i][j] == 'b') {
				cout << "nabi";
				status = true;
				break;
			}
			if (image[i][j] == 'g') {
				cout << "yeongcheol";
				status = true;
				break;
			}
		}
		if (status) break;
	}

	return 0;
}