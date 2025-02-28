#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x;
	while (1) {
		cin >> x;
		if (x == -1.0) break;
		cout << fixed << "Objects weighing " << setprecision(2) << x << " on Earth will weigh " << x * 0.167 << " on the moon.\n";
	}
	return 0;
}