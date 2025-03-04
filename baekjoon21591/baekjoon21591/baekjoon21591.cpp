#include <iostream>
using namespace std;

int main()
{
	int wn, hn, ws, hs;
	cin >> wn >> hn >> ws >> hs;
	cout << (wn >= ws + 2 && hn >= hs + 2 ? 1 : 0);

	return 0;
}