#include <iostream>
using namespace std;

int main()
{
	int t, d, n, s, p, totalS = 0, totalP = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> d >> n >> s >> p;
		totalS = s * n;
		totalP = (p * n) + d;
		cout << (totalS == totalP ? "does not matter\n" : totalS < totalP ? "do not parallelize\n" : "parallelize\n");
	}

	return 0;
}