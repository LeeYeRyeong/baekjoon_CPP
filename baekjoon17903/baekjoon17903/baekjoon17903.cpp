#include <iostream>
using namespace std;

int main()
{
	int num[20];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> num[j];
	}
	cout << (n >= 8 ? "satisfactory" : "unsatisfactory");

	return 0;
}