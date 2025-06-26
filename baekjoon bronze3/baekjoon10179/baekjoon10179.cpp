#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price, sale;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> price;
		sale = price * 0.8;
		cout << '$' << fixed << setprecision(2) << sale << '\n';
	}

	return 0;
}