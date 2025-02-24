#include <iostream>
using namespace std;

int main()
{
	int s, m, l, happy = 0;
	cin >> s >> m >> l;
	happy = s + m * 2 + l * 3;
	cout << (happy >= 10 ? "happy" : "sad");
	return 0;
}