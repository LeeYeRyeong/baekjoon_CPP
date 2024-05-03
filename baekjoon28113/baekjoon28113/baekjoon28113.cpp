#include <iostream>
using namespace std;

int main()
{
	int a, b, n, time;
	cin >> n >> a >> b;
	time = a - (n + b - n);
	if (time == 0) cout << "Anything" << endl;
	else if (time < 0) cout << "Bus" << endl;
	else cout << "Subway" << endl;

	return 0;
}