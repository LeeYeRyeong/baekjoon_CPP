#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double average;
	int h, p;
	while (cin >> h >> p) {
		average = static_cast<double>(h) / static_cast<double>(p);
		cout << fixed << setprecision(2) << average << '\n';
	}
	
	return 0;
}