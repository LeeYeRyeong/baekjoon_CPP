#include <iostream>
using namespace std;

int main()
{
	int num[10] = {};
	int n;
	bool mack = false, zack = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> num[j];
			if (num[j] == 17) zack = true;
			else if (num[j] == 18) mack = true;
		}
		for (int j = 0; j < 10; j++) cout << num[j] << ' ';
		cout << '\n';
		if (mack == true && zack == true) cout << "both\n";
		else if (mack == false && zack == false) cout << "none\n";
		else if (mack == true) cout << "mack\n";
		else if (zack == true) cout << "zack\n";
		cout << '\n';
		mack = false;
		zack = false;
	}

	return 0;
}