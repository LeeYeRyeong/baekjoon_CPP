#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	static const double pi = 3.1415927;
	double inch, distance, averageSpeed, sec;
	int count, order = 1;
	while (1) {
		cin >> inch >> count >> sec;
		if (count == 0) break;
		distance = (inch / (12 * 5280)) * pi * count;
		averageSpeed = distance / (sec / 3600);
		cout << "Trip #" << order++ << ": " << fixed << setprecision(2) << distance << ' ' << averageSpeed << '\n';
	}

	return 0;
}