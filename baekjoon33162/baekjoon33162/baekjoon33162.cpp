#include <iostream>
using namespace std;

int main()
{
	int x, dis = 0;
	cin >> x;
	for (int i = 0; i < x; i++) dis += (i % 2 == 0 ? 3 : -2);
	cout << dis;

	return 0;
}