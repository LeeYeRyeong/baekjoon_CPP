#include <iostream>
using namespace std;

int main()
{
	int result = 0;
	int num[6] = {};
	for (int i = 0; i < 6; i++) cin >> num[i];
	for (int i = 0; i < 6; i++) result += num[i] * 5;

	cout << result << endl;

	return 0;
}