#include <iostream>
using namespace std;

int main()
{
	int money, watermelon, pomegranates, nuts;
	cin >> money >> watermelon >> pomegranates >> nuts;
	if (money >= watermelon) cout << "Watermelon";
	else if (money >= pomegranates) cout << "Pomegranates";
	else if (money >= nuts) cout << "Nuts";
	else cout << "Nothing";

	return 0;
}