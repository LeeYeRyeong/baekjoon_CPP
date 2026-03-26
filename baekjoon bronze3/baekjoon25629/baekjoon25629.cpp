#include <iostream>
using namespace std;

int main()
{
	int n, a, even = 0, odd = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 0) even++;
		else odd++;
	}
	cout << (n % 2 == 0 ? (even == odd ? 1 : 0) : (odd == even + 1 ? 1 : 0));

	return 0;
}