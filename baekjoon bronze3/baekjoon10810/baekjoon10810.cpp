#include <iostream>
using namespace std;

int main()
{
	int basket[100] = {};
	int n, m, ball, start, end;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> start >> end >> ball;
		for (int j = start - 1; j < end; j++) basket[j] = ball;
	}
	for (int i = 0; i < n; i++) cout << basket[i] << ' ';

	return 0;
}