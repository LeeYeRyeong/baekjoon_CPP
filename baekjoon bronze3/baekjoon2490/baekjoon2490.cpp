#include <iostream>
using namespace std;

int main()
{
	int frontCount = 0, backCount = 0, check;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> check;
			if (check == 1) backCount++;
			else frontCount++;
		}
		if (backCount == 4) cout << "E\n";
		else if (frontCount == 4) cout << "D\n";
		else if (frontCount == 3 && backCount == 1) cout << "C\n";
		else if (frontCount == 2 && backCount == 2) cout << "B\n";
		else if (frontCount == 1 && backCount == 3) cout << "A\n";
		backCount = 0, frontCount = 0;
	}

	return 0;
}