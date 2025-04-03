#include <iostream>
using namespace std;

int main()
{
	double n, m;
	cin >> n >> m;
	if (n / m < 0.2) cout << "weak";
	else if (n / m < 0.4) cout << "normal";
	else if (n / m < 0.6) cout << "strong";
	else cout << "very strong";

	return 0;
}