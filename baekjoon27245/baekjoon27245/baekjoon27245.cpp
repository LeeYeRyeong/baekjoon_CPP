#include <iostream>
using namespace std;

int main()
{
	int w, h, l;
	cin >> w >> h >> l;
	if (((w < h ? w : h) >= l * 2) && (w > h ? w : h) <= (w < h ? w : h) * 2) cout << "good";
	else cout << "bad";

	return 0;
}