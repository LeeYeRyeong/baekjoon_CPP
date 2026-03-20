#include <iostream>
using namespace std;

int main()
{
	int p, g, c, n, software = 0, embedded = 0, ai = 0, grade1 = 0;
	cin >> p;
	for (int i = 0; i < p; i++) {
		cin >> g >> c >> n;
		if (g == 1) grade1++;
		else if (c == 1 || c == 2) software++;
		else if (c == 3) embedded++;
		else if (c == 4) ai++;
	}
	cout << software << '\n' << embedded << '\n' << ai << '\n' << grade1;

	return 0;
}