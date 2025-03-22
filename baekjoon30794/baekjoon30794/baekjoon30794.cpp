#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;
	if (s == "miss") n *= 0;
	else if (s == "bad") n *= 200;
	else if (s == "cool") n *= 400;
	else if (s == "great") n *= 600;
	else if (s == "perfect") n *= 1000;
	cout << n;

	return 0;
}