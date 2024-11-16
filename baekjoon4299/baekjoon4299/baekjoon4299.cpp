#include <iostream>
using namespace std;

int main()
{
	int plus, minus, one, two;
	cin >> plus >> minus;
	if (minus < 0 || plus < minus) cout << -1;
	else {
		one = (plus + minus) / 2;
		two = plus - one;
		if (one + two == plus && one - two == minus) cout << one << " " << two;
		else cout << -1;
	}

	return 0;
}