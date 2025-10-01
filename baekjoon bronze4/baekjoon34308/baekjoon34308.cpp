#include <iostream>
using namespace std;

int main()
{
	int n, m, apple;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> apple;
		cout << (n - apple < apple - 1 ? n : 1) << ' ';
	}

	return 0;
}