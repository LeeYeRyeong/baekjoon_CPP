#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	char ch[10000], c;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> ch[i];
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == ch[i]) count++;
	}
	cout << count;

	return 0;
}