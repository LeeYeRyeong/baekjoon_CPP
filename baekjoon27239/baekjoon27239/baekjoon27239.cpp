#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << (n % 8 == 0 ? 'h' : static_cast<char>(n % 8 + 96)) << (n % 8 == 0 ? n / 8 : n / 8 + 1);

	return 0;
}