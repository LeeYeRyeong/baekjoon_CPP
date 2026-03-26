#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (a < 5 && b < 5) {
		b += a;
		if (b >= 5) {
			cout << "yt";
			break;
		}
		a += b;
		if (a >= 5) {
			cout << "yj";
			break;
		}
	}

	return 0;
}