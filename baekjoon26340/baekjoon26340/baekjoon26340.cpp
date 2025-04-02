#include <iostream>
using namespace std;

int main()
{
	int n, w, h, c, resultW, resultH;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w >> h >> c;
		resultW = w;
		resultH = h;
		for (int j = 0; j < c; j++) {
			if (resultW > resultH) resultW /= 2;
			else resultH /= 2;
		}
		cout << "Data set: " << w << ' ' << h << ' ' << c << '\n' << (resultW > resultH ? resultW : resultH) << ' '
			<< (resultW < resultH ? resultW : resultH) << "\n\n";
	}

	return 0;
}