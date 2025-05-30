#include <iostream>
using namespace std;

int main()
{
	int n, a, b, money = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 1) money += 500;
		else if (a >= 2 && a <= 3) money += 300;
		else if (a >= 4 && a <= 6) money += 200;
		else if (a >= 7 && a <= 10) money += 50;
		else if (a >= 11 && a <= 15) money += 30;
		else if (a >= 16 && a <= 21) money += 10;
		if (b == 1) money += 512;
		else if (b >= 2 && b <= 3) money += 256;
		else if (b >= 4 && b <= 7) money += 128;
		else if (b >= 8 && b <= 15) money += 64;
		else if (b >= 16 && b <= 31) money += 32;
		cout << money << (money != 0 ? "0000\n" : "\n");
		money = 0;
	}

	return 0;
}