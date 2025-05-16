#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		else if (a == b && b == c) cout << "Equilateral\n";
		else if ((b + c <= a) || (a + c <= b) || (b + a <= c)) cout << "Invalid\n";
		else if (a == b || b == c || c == a) cout << "Isosceles\n";
		else cout << "Scalene\n";
	}

	return 0;
}