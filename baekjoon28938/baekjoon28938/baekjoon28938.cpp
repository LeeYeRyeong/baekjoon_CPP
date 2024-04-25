#include <iostream>
using namespace std;

int main()
{
	int n, pos = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		pos += number;
	}
	if (pos == 0) cout << "Stay" << endl;
	else if (pos < 0) cout << "Left" << endl;
	else if (pos > 0) cout << "Right" << endl;

	return 0;
}