#include <iostream>
using namespace std;

int main()
{
	int c, a, b, temp;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> a >> b;
		cout << "Case " << i + 1 << ": ";
		if (a == b) {
			if (a == 1) cout << "Habb Yakk\n";
			else if (a == 2) cout << "Dobara\n";
			else if (a == 3) cout << "Dousa\n";
			else if (a == 4) cout << "Dorgy\n";
			else if (a == 5) cout << "Dabash\n";
			else if (a == 6) cout << "Dosh\n";
		}
		else {
			if (a < b) {
				temp = a;
				a = b;
				b = temp;
			}
			if (a == 6 && b == 5) cout << "Sheesh Beesh\n";
			else {
				if (a == 1) cout << "Yakk ";
				else if (a == 2) cout << "Doh ";
				else if (a == 3) cout << "Seh ";
				else if (a == 4) cout << "Ghar ";
				else if (a == 5) cout << "Bang ";
				else if (a == 6) cout << "Sheesh ";
				if (b == 1) cout << "Yakk\n";
				else if (b == 2) cout << "Doh\n";
				else if (b == 3) cout << "Seh\n";
				else if (b == 4) cout << "Ghar\n";
				else if (b == 5) cout << "Bang\n";
				else if (b == 6) cout << "Sheesh\n";
			}
		}
	}
	
	return 0;
}