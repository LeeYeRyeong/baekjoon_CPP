#include <iostream>
using namespace std;

int main()
{
	int t1, m1, t2, m2, time = 0, spin;
	cin >> t1 >> m1 >> t2 >> m2;
	if (m2 < m1) {
		t2--;
		m2 += 60;
	}
	if (t2 < t1) t2 += 24;
	time += (m2 - m1) + (t2 - t1) * 60;
	spin = time / 30;
	cout << time << ' ' << spin;

	return 0;
}