#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	char trackList[10000] = {};
	char track;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> trackList[i];
	cin >> track;
	for (int i = 0; i < n; i++) {
		if (trackList[i] == track) count++;
	}

	cout << count << endl;

	return 0;
}