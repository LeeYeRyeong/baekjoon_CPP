#include <iostream>
using namespace std;

int main()
{
	int count[5] = {};
	int n, min;
	char c;
	cin >> n;
	min = n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 'H') count[0]++;
		else if (c == 'I') count[1]++;
		else if (c == 'A') count[2]++;
		else if (c == 'R') count[3]++;
		else if (c == 'C') count[4]++;
	}
	for (int i = 0; i < 5; i++) {
		if (min > count[i]) min = count[i];
	}
	cout << min;

	return 0;
}