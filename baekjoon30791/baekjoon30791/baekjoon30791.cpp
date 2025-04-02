#include <iostream>
using namespace std;

int main()
{
	int vote[5] = {};
	int count = 0;
	for (int i = 0; i < 5; i++) cin >> vote[i];
	for (int i = 1; i < 5; i++) {
		if ((vote[i] > vote[0] ? vote[i] - vote[0] : vote[0] - vote[i]) <= 1000) count++;
	}
	cout << count;

	return 0;
}