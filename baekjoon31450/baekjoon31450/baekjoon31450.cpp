#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	cout << (n % k == 0 ? "Yes" : "No") << endl;

	return 0;
}