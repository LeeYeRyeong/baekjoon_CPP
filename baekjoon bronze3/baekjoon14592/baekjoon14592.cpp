#include <iostream>
using namespace std;

int main()
{
	int n, s, c, l, maxScore = 0, index, count, time;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> c >> l;
		if (s > maxScore) {
			maxScore = s;
			index = i + 1;
			count = c;
			time = l;
		}
		else if (s == maxScore) {
			if (c < count) {
				index = i + 1;
				count = c;
				time = l;
			}
			else if (c == count) {
				if (time > l) {
					index = i + 1;
					time = l;
				}
			}
		}
	}
	cout << index;

	return 0;
}