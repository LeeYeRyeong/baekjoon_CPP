#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	string menu[100][42];
	int count[100] = {};
	int n, result, index;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> count[i];
		for (int j = 0; j < count[i]; j++) cin >> menu[i][j];
	}
	srand(time(NULL));
	index = rand() % n;
	result = count[index];
	cout << result << '\n';
	for (int i = 0; i < result; i++) cout << menu[index][i] << '\n';

	return 0;
}