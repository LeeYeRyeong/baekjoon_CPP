#include <iostream>
using namespace std;

int main()
{
	int n, result1 = 0, result2 = 0;
	cin >> n;
	result1 = n * 0.78;
	result2 = n - (n * 0.2 * 0.22);
	cout << result1 << endl << result2 << endl;

	return 0;
}