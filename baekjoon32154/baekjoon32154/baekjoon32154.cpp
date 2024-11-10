#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	bool score[10][13] = { {1,1,1,1,1,1,1,1,0,1,0,1,1},
		{1,0,1,0,1,1,1,1,1,0,0,1,1},
		{1,0,1,0,1,1,1,1,1,0,0,1,1},
		{1,1,1,0,1,1,1,1,0,0,0,1,1},
		{1,0,1,0,1,1,1,1,0,0,0,1,1},
		{1,0,1,0,1,1,1,1,0,0,0,1,1},
		{1,0,1,0,1,1,1,1,0,0,0,1,1},
		{1,0,1,0,1,1,1,1,0,0,0,1,1},
		{1,0,1,0,1,1,1,1,0,0,0,1,1},
		{1,1,1,0,0,1,1,1,0,0,0,1,1 } };
	char result[13] = {};
	cin >> n;
	for (int i = 0; i < 13; i++) {
		if (score[n - 1][i] == true) {
			count++;
			result[i] = static_cast<char>(i + 'A');
		}
	}

	cout << count << endl;
	for (int i = 0; i < 13; i++) {
		if (result[i] != '\0') cout << result[i] << " ";
	}

	return 0;
}