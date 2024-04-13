#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n <= 780 && n >= 620) {
		cout << "Red" << endl;
	}
	else if (n >= 590) {
		cout << "Orange" << endl;
	}
	else if (n >= 570) {
		cout << "Yellow" << endl;
	}
	else if (n >= 495) {
		cout << "Green" << endl;
	}
	else if (n >= 450) {
		cout << "Blue" << endl;
	}
	else if (n >= 425) {
		cout << "Indigo" << endl;
	}
	else if (n >= 380) {
		cout << "Violet" << endl;
	}

	return 0;
}