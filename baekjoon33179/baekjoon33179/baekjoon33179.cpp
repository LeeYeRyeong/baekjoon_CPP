#include <iostream>
using namespace std;

int main()
{
	int n, paper, total = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> paper;
		total += (paper % 2 == 1 ? paper / 2 + 1 : paper / 2);
	}
	cout << total;

	return 0;
}