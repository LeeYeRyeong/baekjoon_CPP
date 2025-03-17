#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double k, transfer;
	cin >> k;
	transfer = (k * 0.01) + 25;
	cout << fixed << setprecision(2) << (transfer < 100 ? 100 : (transfer > 2000 ? 2000 : transfer));

	return 0;
}