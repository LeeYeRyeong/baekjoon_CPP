#include <iostream>
using namespace std;

int main()
{
	int n, w, h, l, result = 0;
	cin >> n >> w >> h >> l;
	result = ((w / l) * (h / l) < n ? (w / l) * (h / l) : n);
	cout << result;

	return 0;
}