#include <iostream>
using namespace std;

int main()
{
	int ur, tr, uo, to, result = 0;
	cin >> ur >> tr >> uo >> to;
	result = 56 * ur + 24 * tr + 14 * uo + 6 * to;
	cout << result << endl;

	return 0;
}