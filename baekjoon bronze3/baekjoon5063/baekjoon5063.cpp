#include <iostream>
using namespace std;

int main()
{
	int n, r, c, e;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> r >> e >> c;
		cout << (r == e - c ? "does not matter\n" : r > e - c ? "do not advertise\n" : "advertise\n");
	}
	
	return 0;
}