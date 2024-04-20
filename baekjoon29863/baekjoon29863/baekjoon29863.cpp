#include <iostream>
using namespace std;

int main()
{
	int sleep, wake;
	cin >> sleep >> wake;
	cout << (sleep > 3 ? (24 - sleep) + wake : wake - sleep) << endl;

	return 0;
}