#include <iostream>
using namespace std;

int main()
{
	int buger1, buger2, buger3, drink1, drink2, setBuger, setDrink;
	cin >> buger1 >> buger2 >> buger3 >> drink1 >> drink2;
	setBuger = ((buger1 < buger2 ? buger1 : buger2) < buger3 ? (buger1 < buger2 ? buger1 : buger2) : buger3);
	setDrink = (drink1 < drink2 ? drink1 : drink2);
	cout << setBuger + setDrink - 50 << endl;

	return 0;
}