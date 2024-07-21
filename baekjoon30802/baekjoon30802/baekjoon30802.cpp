#include <iostream>
using namespace std;

int main()
{
	int n, t, p, resultT = 0;
	int size[6] = {};
	cin >> n;
	for (int i = 0; i < 6; i++) cin >> size[i];
	cin >> t >> p;
	
	for (int i = 0; i < 6; i++) {
		if (size[i] == 0) continue;
		resultT += (size[i] % t == 0 ? size[i] / t : size[i] / t + 1);
	}

	cout << resultT << endl << n / p << " " << n % p << endl;

	return 0;
}