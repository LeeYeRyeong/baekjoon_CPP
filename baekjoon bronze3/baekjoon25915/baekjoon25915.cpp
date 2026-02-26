#include <iostream>
using namespace std;

int main()
{
	int count = 84;
	char c;
	cin >> c;
	if (c < 'I') count += ('I' - c);
	else count += (c - 'I');
	cout << count;

	return 0;
}