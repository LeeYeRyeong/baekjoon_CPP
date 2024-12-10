#include <iostream>
using namespace std;

int main()
{
	int n, dice1, dice2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> dice1 >> dice2;
		cout << "Case " << i + 1 << ": " << dice1 + dice2 << endl;
	}
	return 0;
}