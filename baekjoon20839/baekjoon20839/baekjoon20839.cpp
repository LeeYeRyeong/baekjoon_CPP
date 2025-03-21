#include <iostream>
using namespace std;

int main()
{
	int a, c, e, studentA, studentC, studentE;
	cin >> a >> c >> e >> studentA >> studentC >> studentE;
	if (a <= studentA && c <= studentC && e <= studentE) cout << 'A';
	else if (static_cast<double>(a) / 2 <= studentA && c <= studentC && e <= studentE) cout << 'B';
	else if (c <= studentC && e <= studentE) cout << 'C';
	else if (static_cast<double>(c) / 2.0 <= studentC && e <= studentE) cout << 'D';
	else cout << 'E';

	return 0;
}