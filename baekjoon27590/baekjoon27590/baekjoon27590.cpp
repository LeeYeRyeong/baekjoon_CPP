#include <iostream>
using namespace std;

int main()
{
	int ds, ys, dm, ym, sun, moon;
	cin >> ds >> ys >> dm >> ym;
	sun = ys - ds;
	moon = ym - dm;
	while (sun != moon) {
		if (sun < moon) sun += ys;
		else moon += ym;
	}
	cout << sun;

	return 0;
}