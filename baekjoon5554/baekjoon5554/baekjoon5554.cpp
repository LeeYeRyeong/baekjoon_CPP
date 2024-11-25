#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, time = 0;
	cin >> a >> b >> c >> d;
	time = a + b + c + d;
	cout << static_cast<int>(time / 60) << endl << time % 60;

	return 0;
}