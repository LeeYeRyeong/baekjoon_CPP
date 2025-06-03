#include <iostream>
using namespace std;

int main()
{
	string name;
	int index[5] = {};
	bool check = false;
	for (int i = 0; i < 5; i++) {
		cin >> name;
		for (int j = 0; j < name.size() - 2; j++) {
			if (name[j] == 'F' && name[j + 1] == 'B' && name[j + 2] == 'I') {
				index[i] = 1;
				check = true;
			}
		}
	}
	if (check) {
		for (int i = 0; i < 5; i++) {
			if (index[i] == 1) cout << i + 1 << ' ';
		}
	}
	else cout << "HE GOT AWAY!";

	return 0;
}