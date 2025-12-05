#include <iostream>
#include <string>
using namespace std;

int main()
{
	string k;
	int l, n = 0, result = 0;
	cin >> k >> l;
	for (int i = 2; i < l; i++) {
		for (int j = 0; j < k.size(); j++) result = (result * 10 + (k[j] - '0')) % i;
		if (result == 0) {
			n = i;
			break;
		}
		result = 0;
	}
	if (n == 0) cout << "GOOD";
	else cout << "BAD " << n;

	return 0;
}