#include <iostream>
using namespace std;

int main()
{
	string s;
	int n, size;
	cin >> n >> size;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = size - 1; j >= 0; j--) cout << s[j];
		cout << endl;
	}
	return 0;
}