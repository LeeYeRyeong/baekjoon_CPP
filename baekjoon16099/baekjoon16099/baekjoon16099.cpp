#include <iostream>
using namespace std;

int main()
{
	int n;
	long lt, wt, le, we, t, e;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> lt >> wt >> le >> we;
		t = lt * wt;
		e = le * we;
		cout << (t == e ? "Tie\n" : (t < e ? "Eurecom\n" : "TelecomParisTech\n"));
	}
	return 0;
}