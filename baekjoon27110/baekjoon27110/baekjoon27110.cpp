#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, result = 0;
	cin >> n >> a >> b >> c;
	result += (n < a ? n : a);
	result += (n < b ? n : b);
	result += (n < c ? n : c);

	cout << result;

	return 0;
}