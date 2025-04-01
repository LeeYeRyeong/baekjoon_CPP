#include <iostream>
using namespace std;

int main()
{
	int coin[10] = {};
	int n, d;
	bool check = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d;
		for (int j = 0; j < d; j++) cin >> coin[j];
		for (int j = 0; j < d - 1; j++) {
			if (coin[j] * 2 > coin[j + 1]) check = false;
		}
		cout << "Denominations: ";
		for (int j = 0; j < d; j++) cout << coin[j] << ' ';
		cout << '\n' << (check ? "Good " : "Bad ") << "coin denominations!\n\n";
		check = true;
	}
	
	return 0;
}