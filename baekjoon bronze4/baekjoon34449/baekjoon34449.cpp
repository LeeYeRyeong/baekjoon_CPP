#include <iostream>
using namespace std;

int main()
{
	static const double pi = 3.14159;
	double d, w;
	int n;
	cin >> d >> w >> n;
	cout << (d * pi >= w * n ? "YES" : "NO");

	return 0;
}