#include <iostream>
using namespace std;

int main()
{
	int a, w, v;
	cin >> a >> w >> v;
	cout << (a * v <= w ? 1 : 0) << endl;

	return 0;
}