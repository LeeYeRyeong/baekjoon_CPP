#include <iostream>
using namespace std;

int main()
{
	long long angry = 0, status = 0;
	int n, rain;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rain;
		if (rain == 0) status -= 1;
		else status += 1;
		angry += status;
	}
	cout << angry;

	return 0;
}