#include <iostream>
using namespace std;

int main()
{
	int n, prize, sale = 0;
	cin >> n >> prize;
	if (n >= 5 && n < 10) sale = 500;
	else if (n >= 10 && n < 15) sale = (prize * 0.1 > 500 ? prize * 0.1 : 500);
	else if (n >= 15 && n < 20) sale = (prize * 0.1 > 2000 ? prize * 0.1 : 2000);
	else if (n >= 20) sale = (prize * 0.25 > 2000 ? prize * 0.25 : 2000);
	cout << (prize - sale > 0 ? prize - sale : 0);

	return 0;
}