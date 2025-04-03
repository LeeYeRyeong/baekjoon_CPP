#include <iostream>
using namespace std;

int main()
{
	int check[3] = { 0,0,0 };
	int n, number;
	cin >> n;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> number;
			if (number == 7) check[i] = 1;
		}
	}
	cout << (check[0] == 1 && check[1] == 1 && check[2] == 1 ? 777 : 0);

	return 0;
}