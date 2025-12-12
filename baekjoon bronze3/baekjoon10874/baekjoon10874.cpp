#include <iostream>
using namespace std;

int main()
{
	int answer[10];
	int n;
	bool check = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) cin >> answer[j];
		for (int j = 0; j < 10; j++) {
			if (answer[j] != j % 5 + 1) check = false;
		}
		if (check) cout << i + 1 << '\n';
		check = true;
	}

	return 0;
}