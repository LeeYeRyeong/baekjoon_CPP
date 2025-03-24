#include <iostream>
using namespace std;

int main()
{
	int n, w, h, area = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w >> h;
		area = (area < w * h ? w * h : area);
	}
	cout << area;

	return 0;
}