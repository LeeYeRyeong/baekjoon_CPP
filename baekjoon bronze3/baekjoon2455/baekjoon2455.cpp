#include <iostream>
using namespace std;

int main()
{
	int max = 0, trainIn, trainOut, current = 0;
	for (int i = 0; i < 4; i++) {
		cin >> trainOut >> trainIn;
		current += trainIn - trainOut;
		if (current > max) max = current;
	}
	cout << max;

	return 0;
}