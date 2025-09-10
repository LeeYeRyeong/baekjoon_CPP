#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum = 0, q, age;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> q >> age;
		sum += (q * age);
	}
	cout << fixed << setprecision(3) << sum;

	return 0;
}