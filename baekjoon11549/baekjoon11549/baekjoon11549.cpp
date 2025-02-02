#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	int answer[5] = {};
	cin >> n;
	for (int i = 0; i < 5; i++) {
		cin >> answer[i];
		if (n == answer[i])count++;
	}
	cout << count;

	return 0;
}