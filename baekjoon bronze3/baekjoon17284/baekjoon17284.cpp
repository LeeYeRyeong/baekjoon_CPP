#include <iostream>
using namespace std;

int main()
{
	int n, money = 5000;
	while (cin >> n) {
		if (n == 1) money -= 500;
		else if (n == 2) money -= 800;
		else if (n == 3) money -= 1000;
	}
	cout << money;

	return 0;
}