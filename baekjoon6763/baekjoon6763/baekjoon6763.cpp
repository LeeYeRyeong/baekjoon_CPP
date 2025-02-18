#include <iostream>
using namespace std;

int main()
{
	int limit, speed;
	cin >> limit >> speed;
	if (speed > limit) {
		cout << "You are speeding and your fine is $";
		if (speed - limit >= 1 && speed - limit <= 20) cout << 100 << ".";
		else if (speed - limit <= 30) cout << 270 << ".";
		else cout << 500 << ".";
	}
	else cout << "Congratulations, you are within the speed limit!";

	return 0;
}