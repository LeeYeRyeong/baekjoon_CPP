#include <iostream>
using namespace std;

int main()
{
	int start, n, time, sum = 0, result = 0;
	char c;
	cin >> start >> n;
	for (int i = 0; i < n; i++) {
		cin >> time >> c;
		sum += time;
		if (sum >= 210 && result == 0) result = start;
		if (c == 'T') start = (start == 8 ? 1 : ++start);
	}
	result = (result == 0 ? start : result);
	cout << result;

	return 0;
}