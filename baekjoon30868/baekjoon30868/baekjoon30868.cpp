#include <iostream>
using namespace std;

int main()
{
	int n, count;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> count;
		for (int j = 0; j < count / 5; j++) cout << "++++ ";
		for (int j = 0; j < count % 5; j++) cout << "|";
		cout << '\n';
	}

	return 0;
}