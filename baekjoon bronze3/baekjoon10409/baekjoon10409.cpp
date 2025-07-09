#include <iostream>
using namespace std;

int main()
{
	int n, t, wt, work = 0;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> wt;
		if (t >= wt) {
			work++;
			t -= wt;
		}
		else t = 0;
	}
	cout << work;

	return 0;
}