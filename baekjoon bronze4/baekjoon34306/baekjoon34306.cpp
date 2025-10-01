#include <iostream>
using namespace std;

int main()
{
	int count = 0, w, n;
	cin >> w >> n;
	count = w * 5280 / n;
	cout << count;

	return 0;
}